----------------------------------------------------------------------
-- Fichero: MicroSuma.vhd
-- Descripción: 
-- Fecha última modificación: 

-- Autores: 
-- Asignatura: E.C. 1º grado
-- Grupo de Prácticas:
-- Grupo de Teoría:
-- Práctica: 2
-- Ejercicio: 2
----------------------------------------------------------------------


library IEEE;
use IEEE.std_logic_1164.ALL;
use IEEE.std_LOGIC_arith.ALL;
use IEEE.std_logic_unsigned.ALL;

entity MicroSuma is
	port (
		Clk : in std_logic; -- Reloj
		NRst : in std_logic; -- Reset activo a nivel bajo
		MemProgAddr : out std_logic_vector(31 downto 0); -- Dirección para la memoria de programa
		MemProgData : in std_logic_vector(31 downto 0) -- Código de operación
	);
end MicroSuma;

architecture Practica of MicroSuma is

--Declaramos el banco de registros
component Regs is
	port (
		Clk : in std_logic; -- Reloj
		NRst : in std_logic; -- Reset asíncrono a nivel bajo
		RtIn : in std_logic_vector(31 downto 0); -- Dato de entrada RT
		RtAddr : in std_logic_vector(4  downto 0); -- Dirección RT
		RsAddr : in std_logic_vector(4 downto 0); -- Dirección RS
		RsOut : out std_logic_vector(31 downto 0) -- Salida RS
	); 
end component;

--Declaramos la ALUSuma
component ALUSuma is
	port (
		Op1 : in std_logic_vector(31 downto 0); -- Operando
		Op2 : in std_logic_vector(31 downto 0); -- Operando
		Res : out std_logic_vector(31 downto 0) -- Resultado
	);
end component;


	--Declaramos las señales que usaremos con los registros
	signal RtIn : std_logic_vector(31 downto 0);
	signal RtAddr : std_logic_vector(4  downto 0);
	signal RsAddr : std_logic_vector(4 downto 0);
	signal RsOut : std_logic_vector(31 downto 0);
	--Declaramos las señales que usaremos con la ALU
	signal Op1 : std_logic_vector(31 downto 0);
	signal Op2 : std_logic_vector(31 downto 0);
	signal res : std_logic_vector(31 downto 0);
	
	--Señales intermedias
	signal DatIn : std_logic_vector(15 downto 0);

begin
--Instanciamos el banco de registros
	Regs: regsMap port map(
		Clk <= Clk,
		NRst <= NRst,
		RtIn <= RtIn,
		RtAddr <= RtAddr,
		RsAddr <= RsAddr,
		RsOut <= RsOut
	);
	
--Instanciamos la ALU
	ALUSuma: aluSumaMap port map(
		Op1 <= Op1,
		Op2 <= Op2,
		res <= res
	);
	
	DatIn <= MemProgData(15 downto 0);
	--Extensor de signo
	
	Op2 <= (15 downto 0 => DatIn, others => DatIn(15));
	Rs <= MemProgData(25 downto 21);
	Rt <= MemProgData(20 downto 16);
	
	


end Practica;

