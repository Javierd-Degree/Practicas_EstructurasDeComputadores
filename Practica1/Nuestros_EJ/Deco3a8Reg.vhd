----------------------------------------------------------------------
-- Fichero: Deco3a8Reg.vhd
-- Descripci�n: Decodificador 3 a 8 con registro de 8 bits
-- Fecha �ltima modificaci�n: 2017-02-15

-- Autores: Javier Delgado del Cerro (2017), Javier L�pez Cano (2017) 
-- Pareja: 4
-- Asignatura: E.C. 1� grado
-- Grupo de Pr�cticas: 2101
-- Grupo de Teor�a: 210
-- Pr�ctica: 1
-- Ejercicio: 3
----------------------------------------------------------------------
library IEEE;
use IEEE.std_logic_1164.ALL;
use IEEE.std_LOGIC_arith.ALL;
use IEEE.std_logic_unsigned.ALL;

--Tres entradas de un bit(reset, clk y chip enable), y dos buses de datos, entrada y salida del componente, de 3 bits (la entrada) y 8 (la salida)

entity Deco3a8Reg is
   port ( 
		D : in  std_logic_vector(2 downto 0);
		Reset, Clk, Ce : in  std_logic;
		Q : out  std_logic_vector(7 downto 0)
	);
end Deco3a8Reg;

architecture Deco3a8RegArc of Deco3a8Reg is
	--Declaramos el Decodificador y el registro
	
	component Deco3a8 is
		port ( 
			D : in  std_logic_vector (2 downto 0);
			Q : out  std_logic_vector (7 downto 0)
		);
	end component;
	
	component Registro8 is
		port ( 
			D : in  std_logic_vector(7 downto 0);
			Reset, Clk, Ce : in  std_logic;
			Q : out  std_logic_vector(7 downto 0)
		);
	end component;
	
	--Declaramos la se�al auxiliar para unir decodificador y registro
	signal S: std_logic_vector(7 downto 0);
	
	begin
		--Instanciamos los componentes que vamos a usar
		dec: Deco3a8 port map(
			D => D,
			Q => S
		);
		
		reg: Registro8 port map(
			Clk => Clk,
			Reset => Reset,
			Ce => Ce,
			Q => Q,
			D => S
		);
		
end Deco3a8RegArc;
	
	
	

