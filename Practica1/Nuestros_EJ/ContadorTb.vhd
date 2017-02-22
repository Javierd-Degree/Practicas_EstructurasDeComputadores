----------------------------------------------------------------------
-- Fichero: ContadorTb.vhd
-- Descripción: TestBench para el contador de 8 bits
-- Fecha última modificación: 2017-02-15

-- Autores: Javier Delgado del Cerro (2017), Javier López Cano (2017) 
-- Pareja: 4
-- Asignatura: E.C. 1º grado
-- Grupo de Prácticas: 2101
-- Grupo de Teoría: 210
-- Práctica: 1
-- Ejercicio: 4
----------------------------------------------------------------------


library IEEE;
use IEEE.std_logic_1164.ALL;
use IEEE.std_LOGIC_arith.ALL;
use IEEE.std_logic_unsigned.ALL;

--Iniciamos una entidad vacía por ser un TB
entity ContadorTb is
end ContadorTb;

architecture ContadorTbArc of ContadorTb is

	--Declaramos el contador que vamos a usar
	component Contador is
		 Port (
			Clk : in  STD_LOGIC;
			Reset : in  STD_LOGIC;
			Ce : in  STD_LOGIC;
			Up : in  STD_LOGIC;
			Q : out  STD_LOGIC_VECTOR (7 downto 0)
		);
	end component;
	
	--Declaramos las señales y las iniciamos a cero
	signal Clk : std_logic:='0';
	signal Reset : std_logic:='0';
	signal Ce : std_logic:='0';
	signal Up : std_logic:='0';
	signal Q : std_logic_vector(7 downto 0):= x"00";
	
	constant CICLO: time:= 10 ns;
	constant ESPERA: time:= 1 ns;
	
	begin
		--Instanciamos el componente contador con las señales auxiliares creadas
		uut: Contador port map(
			Clk => Clk,
			Reset => Reset,
			Ce => Ce,
			Up => Up,
			Q => Q
		);
		
		reloj: process --No tiene lista de sensibilidad (se ejecuta continuamente)
		begin
			Clk <= '0';
			wait for CICLO/2;
			Clk <= '1';
			wait for CICLO/2;		
		end process;
		
		simulacion: process
		begin
			--Comprobamos el reset
			Reset <= '1';
			wait for ESPERA;
			assert Q = x"00" report "Fallo en el reset" severity error;
			--Comprobamos el chip enable
			Reset <= '0';
			Ce <= '0';
			wait for CICLO;
			assert Q = x"00" report "Fallo en el Ce" severity error;
			
			--Comprobamos todos los casos con Up='1'
			Reset <= '0';
			Ce <= '1';
			Up <= '1';
			wait for ESPERA;
			for i in 0 to 255 loop
				assert Q = conv_std_logic_vector(i, 8) report "Fallo en i="&integer'image(i)&" Up = '1'";
				wait until rising_edge(Clk);
				wait for ESPERA;
			end loop;
			--Comprobamos que el desbordamiento funciona correctamente con Up = '1'
			assert Q = x"00" report "Fallo en desbordamiento Up = '1'";
			wait for CICLO;	--Dejamos un ciclo de reloj para que se vea en la simulación
			
			--Reseteamos el contador
			Reset <= '1';
			wait for ESPERA;
			
			--Comprobamos todos los casos con Up='0'
			Reset <= '0';
			Ce <= '1';
			Up <= '0';
			wait for ESPERA;
			--Comprobamos que el desbordamiento funciona correctamente con Up = '0'
			wait until rising_edge(Clk);
			wait for ESPERA;
			assert Q = x"FF" report "Fallo en desbordamiento Up = '0'";
			--Comprobamos el resto de casos
			for i in 255 downto 0 loop
				assert Q = conv_std_logic_vector(i, 8) report "Fallo en i="&integer'image(i)&" Up = '0'";
				wait until rising_edge(Clk);
				wait for ESPERA;
			end loop;
			report "Simulación finalizada. Todo funciona correctamente";
			wait; --Detenemos el proceso
		end process;
end ContadorTbArc;