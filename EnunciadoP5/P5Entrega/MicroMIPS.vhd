----------------------------------------------------------------------
-- Fichero: UnidadControl.vhd
-- Descripción: Unidad de control del procesador
-- Fecha última modificación: 2017-04-05

-- Autores: Javier Delgado del Cerro y Javier López Cano
-- Asignatura: EC 1º grado
-- Grupo de Prácticas: 2101
-- Grupo de Teoría: 210
-- Práctica: 5
-- Ejercicio: 2
----------------------------------------------------------------------
library ieee;
use ieee.std_logic_1164.all;
use ieee.std_logic_arith.all;
use ieee.std_logic_unsigned.all;

entity MicroMips is port(
		Clk : in std_logic; -- Reloj
		NRst : in std_logic; -- Reset activo a nivel bajo
		MemProgAddr : out std_logic_vector(31 downto 0); -- Dirección para la memoria de programa
		MemProgData : in std_logic_vector(31 downto 0); -- Código de operación
		MemDataAddr : out std_logic_vector(31 downto 0); -- Dirección para la memoria de datos
		MemDataDataRead : in std_logic_vector(31 downto 0); -- Dato a leer en la memoria de datos
		MemDataDataWrite : out std_logic_vector(31 downto 0); -- Dato a guardar en la memoria de datos
		MemDataWE : out std_logic
	);
end MicroMips;

architecture MicroMIPSArc of MicroMIPS is
signal MPDExtSigno, Op1, Op2, Res, Wd3, Rd1, Rd2, D, Addr : std_logic_vector(31 downto 0);
signal PCBranch, PCBranchAux, PCJump, NextAddress : std_logic_vector(31 downto 0);
signal OPCode, Funct : std_logic_vector (5 downto 0);
signal A1, A2, A3 : std_logic_vector(4  downto 0);
signal ALUControl : std_logic_vector (2 downto 0);
signal Z, We3, Jump, regToPc, Branch, PCToReg, MemToReg, MemWrite, ALUSrc, ExtCero, RegWrite, RegDest, PCSrc : std_logic;

component AluMIPS is port(
	Op1, Op2: in std_logic_vector(31 downto 0);
	ALUControl: in std_logic_vector(2 downto 0);
	Res: out std_logic_vector(31 downto 0);
	Z: out std_logic
); 
end component;

component RegsMIPS is
	port (
		Clk : in std_logic; -- Reloj
		We3 : in std_logic; -- Write enable
		NRst : in std_logic; -- Reset asíncrono a nivel bajo
		Wd3 : in std_logic_vector(31 downto 0); -- Dato de entrada Wd3
		A1 : in std_logic_vector(4  downto 0); -- Dirección A1
		A2 : in std_logic_vector(4  downto 0); -- Dirección A2
		A3 : in std_logic_vector(4 downto 0); -- Dirección A3
		Rd1, Rd2 : out std_logic_vector(31 downto 0) -- Salida Rd1, Rd2
	); 
end component;

component UnidadControl is
	port(
		OPCode : in  std_logic_vector (5 downto 0); -- OPCode de la instrucción
		Funct : in std_logic_vector(5 downto 0); -- Funct de la instrucción
		-- Señales para el PC
		Jump : out  std_logic;
		RegToPC : out std_logic;
		Branch : out  std_logic;
		PCToReg : out std_logic;
		-- Señales para la memoria
		MemToReg : out  std_logic;
		MemWrite : out  std_logic;
		
		-- Señales para la ALU
		ALUSrc : out  std_logic;
		ALUControl : out  std_logic_vector (2 downto 0);
		ExtCero : out std_logic;
		
		-- Señales para el GPR
		RegWrite : out  std_logic;
		RegDest : out  std_logic
      );
end component;

component PC is port(
	D: in std_logic_vector(31 downto 0);
	Clk, NRst: in std_logic;
	Addr: out std_logic_vector(31 downto 0)
	);
end component;

begin

AluMipsPM : AluMIPS port map(
	Op1 => Op1,
	Op2 => Op2,
	ALUControl => ALUControl,
	Res => Res,
	Z => Z
);

RegsMipsPM : RegsMIPS port map(
	Clk => Clk,
	We3 => We3,
	NRst => NRst,
	Wd3 => Wd3,
	A1 => A1,
	A2 => A2,
	A3 => A3,
	Rd1 => Rd1,
	Rd2 => Rd2
);

UnidadControlPM : UnidadControl port map(
	OPCode => OPCode,
	Funct => Funct,
	Jump => Jump,
	RegToPC => RegToPC,
	Branch => Branch,
	PCToReg => PCToReg,
	MemToReg => MemToReg,
	MemWrite => MemWrite,
	ALUSrc => ALUSrc,
	ALUControl => ALUControl,
	ExtCero => ExtCero,
	RegWrite => RegWrite,
	RegDest => RegDest

);

PCPM : PC port map(
	D => D,
	Clk => Clk,
	NRst => NRst,
	Addr => Addr
);

OPCode <= MemProgData(31 downto 26);
Funct <= MemProgData(5 downto 0);

--Extensor Signo
MPDExtSigno(31 downto 16) <= (others =>  MemProgData(15));
MPDExtSigno(15 downto 0) <= MemProgData(15 downto 0);

MemDataAddr <= Res;
MemDataDataWrite <= Rd2;
MemDataWE <= MemWrite;
MemProgAddr <=Addr;
We3 <= RegWrite;
A1 <= MemProgData(25 downto 21);
A2 <= MemProgData(20 downto 16);
A3 <= "11111" when PCToReg = '1' else
	MemProgData(20 downto 16) when RegDest = '0' else MemProgData(15 downto 11);
Wd3 <= NextAddress when PCToReg = '1' else 
		MemDataDataRead when MemToReg = '1' else Res;

--Entradas de la ALU
Op1 <= Rd1;
Op2 <= Rd2 when ALUSrc = '0' else
		x"0000"&MemProgData(15 downto 0) when ExtCero = '1' else  MPDExtSigno;

PCSrc <= Z AND Branch;

--Generamos los distintos PC posibles
NextAddress <= Addr + 4;

PCJump(31 downto 28) <= NextAddress(31 downto 28);
PCJump(27 downto 0) <= MemProgData(25 downto 0) & "00";

PCBranchAux <= MPDExtSigno(29 downto 0) & "00";
PCBranch <= PCBranchAux + NextAddress;

--Multiplexores de PC
D <= Rd1 when RegToPC = '1' else 
	PCJump when Jump = '1' else
	PCBranch when PCSrc = '1' else
	NextAddress;

end MicroMIPSArc;		



