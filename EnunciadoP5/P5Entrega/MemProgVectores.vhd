----------------------------------------------------------------------
-- Fichero: MemProgVectores.vhd
-- Descripción: Instrucciones de vectores.asm en código máquina
-- Fecha última modificación: 2017-04-26
-- Cambiamos el nombre del modulo a MemProgVectores

-- Autores: Javier Delgado del Cerro y Javier López Cano
-- Asignatura: EC 1º grado
-- Grupo de Prácticas: 2101
-- Grupo de Teoría: 210
-- Práctica: 5
-- Ejercicio: 2 y 3
----------------------------------------------------------------------


library IEEE;
use IEEE.std_logic_1164.ALL;
use IEEE.std_LOGIC_arith.ALL;
use IEEE.std_logic_unsigned.ALL;

entity MemProgVectores is
	port (
		MemProgAddr : in std_logic_vector(31 downto 0); -- Dirección para la memoria de programa
		MemProgData : out std_logic_vector(31 downto 0) -- Código de operación
	);
end MemProgVectores;

architecture Simple of MemProgVectores is

begin

	LecturaMemProg: process(MemProgAddr)
	begin
		-- La memoria devuelve un valor para cada dirección.
		-- Estos valores son los códigos de programa de cada instrucción,
		-- estando situado cada uno en su dirección.
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
			
			when others => MemProgData <= X"00000000"; -- Resto de memoria vacía
		end case;
	end process LecturaMemProg;

end Simple;

