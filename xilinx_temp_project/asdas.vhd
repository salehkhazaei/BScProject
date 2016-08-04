library ieee;
use ieee.std_logic_1164.all;

entity q1_1 is

port( 
  	a   : in    std_logic;
	b   : out    std_logic
	);
end q1_1;

architecture Behaviour of q1_1 is
begin
	b <= a;
end behaviour;
