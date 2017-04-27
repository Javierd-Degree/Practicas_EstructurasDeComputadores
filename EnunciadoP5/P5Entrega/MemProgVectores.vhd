----------------------------------------------------------------------
-- Fichero: MemProgVectores.vhd
-- Descripci�n: Instrucciones de vectores.asm en c�digo m�quina
-- Fecha �ltima modificaci�n: 2017-04-26
-- Cambiamos el nombre del modulo a MemProgVectores

-- Autores: Javier Delgado del Cerro y Javier L�pez Cano
-- Asignatura: EC 1� grado
-- Grupo de Pr�cticas: 2101
-- Grupo de Teor�a: 210
-- Pr�ctica: 5
-- Ejercicio: 2 y 3
----------------------------------------------------------------------


library IEEE;
use IEEE.std_logic_1164.ALL;
use IEEE.std_LOGIC_arith.ALL;
use IEEE.std_logic_unsigned.ALL;

entity MemProgVectores is
	port (
		MemProgAddr : in std_logic_vector(31 downto 0); -- Direcci�n para la memoria de programa
		MemProgData : out std_logic_vector(31 downto 0) -- C�digo de operaci�n
	);
end MemProgVectores;

architecture Simple of MemProgVectores is

begin

	LecturaMemProg: process(MemProgAddr)
	begin
		-- La memoria devuelve un valor para cada direcci�n.
		-- Estos valores son los c�digos de programa de cada instrucci�n,
		-- estando situado cada uno en su direcci�n.
		case MemProgAddr is
			when x"00000000" => MemProgData <= x"00008020"; 
			when x"00000004" => MemProgData <= x"8C082000"; 
			when x"00000008" => MemProgData <= x"01084020"; 
			when x"0000000C" => MemProgData <= x"01084020"; 
			when x"00000010" => MemProgData <= x"0208482A"; 
			when x"00000014" => MemProgData <= x"11200008"; 
			when x"00000018" => MemProgData <= x"8e0a2004"; 
			when x"0000001C" => MemProgData <= x"8e0b201c"; 
			when x"00000020" => MemProgData <= x"016b5820"; 
			when x"00000024" => MemProgData <= x"016b5820"; 
			when x"00000028" => MemProgData <= x"014b6020"; 
			when x"0000002C" => MemProgData <= x"ae0c2034"; 
			when x"00000030" => MemProgData <= x"22100004"; 
			when x"00000034" => MemProgData <= x"08000004"; 
			when x"00000038" => MemProgData <= x"0800000e"; 	
			
			when others => MemProgData <= X"00000000"; -- Resto de memoria vac�a
		end case;
	end process LecturaMemProg;

end Simple;

