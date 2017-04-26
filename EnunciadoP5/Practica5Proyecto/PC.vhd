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

entity PC is port(
	D: in std_logic_vector(31 downto 0);
	Clk, NRst: in std_logic;
	Addr: out std_logic_vector(31 downto 0)
	);
end PC;

architecture PCArc of PC is
begin
	process(Clk, NRst)
	begin
		if NRst = '0' then 
			Addr <= x"00000000";
		elsif  rising_edge(Clk) then
			Addr <= D;
		end if;
	end process;
end architecture;