----------------------------------------------------------------------
-- Fichero: registro8.vhd
-- Descripci�n: Registro de 8 bit con Chip Enable a partir del registro de 1 bit suministrado
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

--Tres entradas (reset, clk y chip enable), y dos buses de datos, entrada y salida del registro, de 8 bits cada uno

entity Registro8 is
    port ( 
		D : in  std_logic_vector(7 downto 0);
		Reset, Clk, Ce : in  std_logic;
		Q : out  std_logic_vector(7 downto 0)
	);
end Registro8;

architecture Reg8Arc of Registro8 is
	
begin

	--El registro es sensible al Reset (as�ncrono) y a la se�al del reloj
	process (Reset, Clk)
	begin
		-- Si el reset est� activo todo el bus de datos de salida vale 0
		if Reset = '1' then
			Q <= (others =>'0');
		-- Si hay un flanco de subida, comprobamos el CE
		elsif rising_edge (Clk) then
			-- Si CE est� activo, el bus de salida es el mismo que el bus de entrada
			if Ce = '1' then
				Q <= D;
			end if;
		end if;
	end process;

end Reg8Arc;
