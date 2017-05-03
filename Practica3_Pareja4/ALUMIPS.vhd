----------------------------------------------------------------------
-- Fichero: ALUMIPS.vhd
-- Descripción: ALU del microprocesador MIPS
-- Fecha última modificación: 8/03/17
-- Autores: Javier Delgado y Javier López
-- Asignatura: EC 1º grado
-- Grupo de Prácticas:2101
-- Grupo de Teoría:210
-- Práctica: 3
-- Ejercicio: 1
----------------------------------------------------------------------

library ieee;
use ieee.std_logic_1164.all;
use ieee.std_logic_arith.all;
use ieee.std_logic_unsigned.all;


entity AluMIPS is port(
	Op1, Op2: in std_logic_vector(31 downto 0);
	ALUControl: in std_logic_vector(2 downto 0);
	Res: out std_logic_vector(31 downto 0);
	Z: out std_logic
); 
end AluMIPS;

architecture AluArc of AluMIPS is
--Creamos una señal auxiliar para obtener Z luego
signal ResAux: std_logic_vector(31 downto 0);
signal resta: std_logic_vector(31 downto 0);
begin
resta <= Op1 - Op2;
	ALU:process(Op1, Op2, ALUControl, Resta)
		begin
			case ALUControl is
				when "010" => ResAux <= Op1 + Op2; --Suma
				when "110" => ResAux <= Resta; --Resta
				when "000" => ResAux <= Op1 and Op2; -- And
				when "001" => ResAux <= Op1 or Op2; -- Or
				when "101" => ResAux <= Op1 nor Op2; --Nor
				--Para evitar posibles errores usamos when others para el STL
				when others => 
					--Op1 es negativo y Op2 es positivo, STL = 1
					if (Op1(31) = '1') and (Op2(31) = '0') then
						ResAux <= (0 => '1', others => '0');
					--Op1 es positivo y Op2 es negativo, STL = 0
					elsif (Op1(31) = '0') and (Op2(31) = '1') then
						ResAux <= (others => '0');
					--Op1 y Op2 tienen el mismo signo, STL es el signo de la resta;
					else
						ResAux <= (0 => Resta(31) ,others => '0');
					end if;
			end case;
		end process;
		
		--Z vale 1 cuando todos los bits de ResAux son 0
		Z <= '1' when ResAux = x"00000000" else '0';
			
		Res <= ResAux;
				
end AluArc;