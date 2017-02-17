library IEEE;
use IEEE.std_logic_1164.ALL;
use IEEE.std_logic_arith.ALL;
use IEEE.std_logic_unsigned.ALL;

entity P1e1_tb is
end P1e1_tb;

architecture p1arc of P1e1_tb is 
	component P1e1
		port(
			A, B, C: in std_logic;
			Q : out std_logic
		);
	end component;

	signal sigA : std_logic:='0';
	signal sigB : std_logic:='0';
	signal sigC : std_logic:='0';

	signal q : std_logic;

	constant ESPERA : time:= 10 ns;

	begin 
	uut:P1e1 port map(
		A=>sigA,
		B=>sigB,
		C=>sigC,
		Q=>q
	);

	process
	begin
		sigA <= '0'; sigB <= '0'; sigC <= '0';
		wait for ESPERA;
		assert q = '0'
			report "Fallo en la combinación " & std_logic'image(sigA)& std_logic'image(sigB)& std_logic'image(sigC)
			severity failure;
		sigA <= '0'; sigB <= '0'; sigC <= '1';
		wait for ESPERA;
		assert q = '0'
			report "Fallo en la combinación " & std_logic'image(sigA)& std_logic'image(sigB)& std_logic'image(sigC)
			severity failure;
		sigA <= '0'; sigB <= '1'; sigC <= '0';
		wait for ESPERA;
		assert q = '0'
			report "Fallo en la combinación " & std_logic'image(sigA)& std_logic'image(sigB)& std_logic'image(sigC)
			severity failure;
		sigA <= '0'; sigB <= '1'; sigC <= '1';
		wait for ESPERA;
		assert q = '1'
			report "Fallo en la combinación " & std_logic'image(sigA)& std_logic'image(sigB)& std_logic'image(sigC)
			severity failure;
		sigA <= '1'; sigB <= '0'; sigC <= '0';
		wait for ESPERA;
		assert q = '0'
			report "Fallo en la combinación " & std_logic'image(sigA)& std_logic'image(sigB)& std_logic'image(sigC)
			severity failure;
		sigA <= '1'; sigB <= '0'; sigC <= '1';
		wait for ESPERA;
		assert q = '1'
			report "Fallo en la combinación " & std_logic'image(sigA)& std_logic'image(sigB)& std_logic'image(sigC)
			severity failure;
		sigA <= '1'; sigB <= '1'; sigC <= '0';
		wait for ESPERA;
		assert q = '0'
			report "Fallo en la combinación " & std_logic'image(sigA)& std_logic'image(sigB)& std_logic'image(sigC)
			severity failure;
		sigA <= '1'; sigB <= '1'; sigC <= '1';
		wait for ESPERA;
		assert q = '1'
			report "Fallo en la combinación " & std_logic'image(sigA)& std_logic'image(sigB)& std_logic'image(sigC)
			severity failure;
		
		report "Simulación finalizada";
		
		wait;
	end process;
end p1arc;