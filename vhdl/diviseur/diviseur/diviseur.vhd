----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    18:39:59 09/06/2018 
-- Design Name: 
-- Module Name:    diviseur - architecture_diviseur 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity diviseur is
    Port ( clk : in  STD_LOGIC; -- horloge système
           rst : in  STD_LOGIC; -- reset 
           en : in  STD_LOGIC; -- validation comptage (=1)
           Led : out  STD_LOGIC); -- visualisation du signal 
end diviseur;

architecture architecture_diviseur of diviseur is

-- déclaration du composant à instancier
component diviseur_generique is
    Generic(clkdiv : integer := 2);
    Port ( clk : in  STD_LOGIC;
           rst : in  STD_LOGIC;
			  en : in STD_LOGIC;
           tc_out : out  STD_LOGIC);
end component;

-- signaux pour la connection du composant
signal tc_out : STD_LOGIC;
-- horloge de sortie
signal clock_out : STD_LOGIC;

begin

   -- connexion physique de l'horloge de sortie
	Led <= clock_out;
	
	-- instanciation du composant diviseur
	ut_diviseur : diviseur_generique generic map (clkdiv => 10) -- comptage par 10
	                                  port map (clk => clk, rst => rst, en => en, tc_out => tc_out);
	
	
	process(clk,rst)
	begin
		if rst = '1' then -- reset asynchrone
		   clock_out <= '0';
		elsif rising_edge(clk) and tc_out = '1' then -- division par deux
			clock_out <= not clock_out;
		end if;
	end process;
	


end architecture_diviseur;

