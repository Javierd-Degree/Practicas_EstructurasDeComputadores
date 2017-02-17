----------------------------------------------------------------------
-- Fichero: Deco3a8.vhd
-- Descripci�n: Decodificador 3 a 8
-- Fecha �ltima modificaci�n: 2017-02-15

-- Autores: Javier Delgado del Cerro (2017), Javier L�pez Cano (2017) 
-- Pareja: 4
-- Asignatura: E.C. 1� grado
-- Grupo de Pr�cticas: 2101
-- Grupo de Teor�a: 210
-- Pr�ctica: 1
-- Ejercicio: 2
----------------------------------------------------------------------

library IEEE;
use IEEE.std_logic_1164.ALL;
use IEEE.std_LOGIC_arith.ALL;
use IEEE.std_logic_unsigned.ALL;


entity Deco3a8 is
    port ( 
		D : in  std_logic_vector (2 downto 0);
		Q : out  std_logic_vector (7 downto 0)
	);
end Deco3a8;

architecture Deco3a8Arc of Deco3a8 is

begin

	process (D)
	begin
		case D is
			--Ponemos los c�digon de la salida en hexadecimal para ahorrar espacio
			when "000" => Q <= x"01";
			when "001" => Q <= x"02";
			when "010" => Q <= x"04";
			when "011" => Q <= x"08";
			when "100" => Q <= x"10";
			when "101" => Q <= x"20";
			when "110" => Q <= x"40";
			when others => Q <= x"80";
		end case;
	end process;

end Deco3a8Arc;
