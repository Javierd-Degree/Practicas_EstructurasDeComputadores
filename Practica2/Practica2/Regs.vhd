----------------------------------------------------------------------
-- Fichero: Regs.vhd
-- Descripci�n: 
-- Fecha �ltima modificaci�n: 

-- Autores: 
-- Asignatura: E.C. 1� grado
-- Grupo de Pr�cticas:
-- Grupo de Teor�a:
-- Pr�ctica: 2
-- Ejercicio: 1
----------------------------------------------------------------------


library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.std_logic_unsigned.all;
use IEEE.std_logic_arith.all;

entity Regs is
	port (
		Clk : in std_logic; -- Reloj
		NRst : in std_logic; -- Reset as�ncrono a nivel bajo
		RtIn : in std_logic_vector(31 downto 0); -- Dato de entrada RT
		RtAddr : in std_logic_vector(4  downto 0); -- Direcci�n RT
		RsAddr : in std_logic_vector(4 downto 0); -- Direcci�n RS
		RsOut : out std_logic_vector(31 downto 0) -- Salida RS
	); 
end Regs;

architecture Practica of Regs is

	-- Tipo para almacenar los registros
	type regs_t is array (0 to 31) of std_logic_vector(31 downto 0);

	-- Esta es la se�al que contiene los registros. El acceso es de la
	-- siguiente manera: regs(i) acceso al registro i, donde i es
	-- un entero. Para convertir del tipo std_logic_vector a entero se
	-- hace de la siguiente manera: conv_integer(slv), donde
	-- slv es un elemento de tipo std_logic_vector

	-- Registros inicializados a '0' 
	-- NOTA: no cambie el nombre de esta se�al.
	signal regs : regs_t;

begin  -- PRACTICA

	------------------------------------------------------
	-- Escritura del registro RT
	------------------------------------------------------
	escritura: process(Clk, NRst)
	begin 
		if (NRst = '0') then
			--Inicializamos todo a cero
			for i in 0 to 31 loop
				regs(i) <= (others => '0');
			end loop;
		elsif(rising_edge(Clk)) then
			--Copiamos RtIn en el registro seleccionado
			if	RtAddr /= "00000" then --Si es el registro 0 no escribimo
				regs(conv_integer(RtAddr)) <= RtIn; 
			end if;
		end if;
	end process;
			
	------------------------------------------------------
	-- Lectura del registro RS
	------------------------------------------------------
	RsOut <= regs(conv_integer(RsAddr));
	
end Practica;

