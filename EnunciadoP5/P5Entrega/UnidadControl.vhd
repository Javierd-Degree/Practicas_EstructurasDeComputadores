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


library IEEE;
use IEEE.std_logic_1164.ALL;
use IEEE.std_LOGIC_arith.ALL;
use IEEE.std_logic_unsigned.ALL;

entity UnidadControl is
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
end UnidadControl;

architecture Control of UnidadControl is
begin

MemToReg	<= '1' when OPCode = "100011" else '0'; --LW
MemWrite	<= '1' when OPCode = "101011" else '0'; --SW
Branch	<= '1' when OPCode = "000100" else '0'; --BEQ
ALUControl	<= "010" when (OPCode = "100011")or(OPCode = "101011") else	--LW y SW
					"110" when OPCode = "000100" else --BEQ
					"000" when (OPCode = "000000")and(Funct="100100") else --AND
					"010" when (OPCode = "000000")and(Funct="100000") else --ADD
					"110" when (OPCode = "000000")and(Funct="100010") else --SUB
					"101" when (OPCode = "000000")and(Funct="100111") else --NOR
					"001" when (OPCode = "000000")and(Funct="100101") else --OR
					"111" when (OPCode = "000000")and(Funct="101010") else --SLT
					"000" when OPCode = "001100" else	--ANDI
					"001" when OPCode = "001101" else	--ORI
					"010" when OPCode = "001000" else	--ADDI
					"111" when OPCode = "001010" else	--SLTI
					"---";
ALUSrc	<= '1' when (OPCode = "001000")or(OPCode = "001100")or(OPCode = "001101")or(OPCode = "001010")or(OPCode = "100011")or(OPCode = "101011") else '0'; 
--LW, SW, logicas inmediatas y artiméticas inmediatas
RegDest	<= '1' when OPCode = "000000" else '0'; 
--Todas las R-Type
RegWrite	<= '1' when (OPCode = "000000")or(OPCode = "100011")or(OPCode = "001000")or(OPCode = "001100")or(OPCode = "001101")or(OPCode = "000011")or(OPCode = "001010") else '0'; 
--Todas las R-Type, LW, JAL y logicas inmediatas y artiméticas inmediatas
RegToPC	<= '1' when (OPCode = "000000")and(Funct = "001000") else '0'; --JR
ExtCero	<= '1' when (OPCode = "001100")or(OPCode = "001101") else '0'; --Lógicas inmediatas
Jump	<= '1' when (OPCode = "000010")or(OPCode = "000011") else '0'; 	--J y JAL
PCToReg	<= '1' when OPCode = "000011" else '0'; 								--JAL

end Control;
	