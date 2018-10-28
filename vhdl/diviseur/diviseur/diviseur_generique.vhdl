----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    18:39:59 09/06/2018 
-- Design Name: 
-- Module Name:    diviseur_generique - architecture_diviseur_generique 
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
use IEEE.NUMERIC_STD.ALL;
use ieee.math_real.all;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity diviseur_generique is
    Generic(clkdiv : integer := 2); -- valeur de comptage
    Port ( clk : in  STD_LOGIC; -- horloge système
           rst : in  STD_LOGIC; -- reset asynchrone
			  en : in STD_LOGIC; -- validation comptage (=1)
           tc_out : out  STD_LOGIC); -- impulsion de fin de comptage
end diviseur_generique;

architecture architecture_diviseur_generique of diviseur_generique is

-- calcul du nombre de bits en fonction de la valeur du diviseur
-- 2^Nbits-1 > clkdiv
constant Nbits : integer :=  integer(ceil(log(real(clkdiv))/log(2.0)));

signal cpt : unsigned(Nbits-1 downto 0);

begin
  -- process de comptage
  comptage: process(clk,rst,en) -- liste de sensibilité pour la simulation
  begin
	 if rst = '1' then -- reset asynchrone
	    cpt <= (others => '0');
    elsif rising_edge(clk) and en = '1' then  -- comptage
	   if cpt <  clkdiv-1  then 
			cpt <= cpt + 1;
		else -- remise à zéro en fin de comptage clkdiv
			cpt <= (others => '0');
		end if;		    
	 end if;
  end process comptage;
  -- process de génération de la retenue
  retenue: process(cpt) -- liste de sensibilité pour la simulation
	begin
		 if cpt=clkdiv-1 then  -- génération impulsion de fin de comptage
			tc_out <= '1';
		 else 
			tc_out <= '0';
		 end if;	
	end process retenue;  


end architecture_diviseur_generique;

