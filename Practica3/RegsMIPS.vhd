----------------------------------------------------------------------
-- Fichero: RegsMIPS.vhd
-- Descripción: 32 registros de 32 bits
-- Fecha última modificación: 14/03/2017
-- Autores: Javier López y Javier Delgado
-- Asignatura: E.C. 1º grado
-- Grupo de Prácticas: 2101
-- Grupo de Teoría: 210
-- Práctica: 3
-- Ejercicio: 2
----------------------------------------------------------------------


library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.std_logic_unsigned.all;
use IEEE.std_logic_arith.all;

entity RegsMIPS is
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
end RegsMIPS;

architecture Practica of RegsMIPS is

	-- Tipo para almacenar los registros
	type regs_t is array (0 to 31) of std_logic_vector(31 downto 0);

	-- Esta es la señal que contiene los registros. El acceso es de la
	-- siguiente manera: regs(i) acceso al registro i, donde i es
	-- un entero. Para convertir del tipo std_logic_vector a entero se
	-- hace de la siguiente manera: conv_integer(slv), donde
	-- slv es un elemento de tipo std_logic_vector

	-- Registros inicializados a '0' 
	-- NOTA: no cambie el nombre de esta señal.
	signal regs : regs_t;

begin  -- PRACTICA

	------------------------------------------------------
	-- Escritura del registro A3
	------------------------------------------------------
	escritura: process(Clk, NRst)
	begin 
		if (NRst = '0') then
			--Inicializamos todo a cero
			for i in 0 to 31 loop
				regs(i) <= (others => '0');
			end loop;
		elsif(rising_edge(Clk) and We3='1') then
			--Si el We esta activado y hay flanco de subida
			--Copiamos RtIn en el registro seleccionado
			if	A3 /= "00000" then --Si es el registro 0 no escribimo
				regs(conv_integer(A3)) <= Wd3; 
			end if;
		end if;
	end process;
			
	------------------------------------------------------
	-- Lectura del registro A1
	------------------------------------------------------
	Rd1 <= regs(conv_integer(A1));
	
	------------------------------------------------------
	-- Lectura del registro A2
	------------------------------------------------------
	Rd2 <= regs(conv_integer(A2));

end Practica;