library IEEE;
use IEEE.std_logic_1164.ALL;
use IEEE.std_logic_arith.ALL;
use IEEE.std_logic_unsigned.ALL;

entity P1e1 is
	port( 
		A, B, C : in std_logic;
		Q : out std_logic
		);
end P1e1;

architecture ej1 of P1e1 is
	begin
		Q <= (A or B) and C;
end ej1;