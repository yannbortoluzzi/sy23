--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   09:35:38 10/15/2018
-- Design Name:   
-- Module Name:   /home/uvs/Bureau/spi/spytest.vhd
-- Project Name:  spi
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: pmodals_led
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY spytest IS
END spytest;
 
ARCHITECTURE behavior OF spytest IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT pmodals_led
    PORT(
         clk : IN  std_logic;
         reset : IN  std_logic;
         SPI_MISO : IN  std_logic;
         Led : OUT  std_logic_vector(7 downto 0);
         SPI_CLK : BUFFER  std_logic;
         SPI_CS : BUFFER  std_logic_vector(0 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal reset : std_logic := '0';
   signal SPI_MISO : std_logic := '0';

 	--Outputs
   signal Led : std_logic_vector(7 downto 0);
   signal SPI_CLK : std_logic;
   signal SPI_CS : std_logic_vector(0 downto 0);
	signal valeur : std_logic_vector(15 downto 0);
	
   -- Clock period definitions
   constant clk_period : time := 10 ns;
  
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: pmodals_led PORT MAP (
          clk => clk,
          reset => reset,
          SPI_MISO => SPI_MISO,
          Led => Led,
          SPI_CLK => SPI_CLK,
          SPI_CS => SPI_CS
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 

 
 stim_proc: process
   -- Stimulus process
  begin		
 		reset <= '1';
		valeur <= b"010_0011_0101_01011";
		wait for clk_period*2;
		reset <= '0';
      wait;
   end process;
	
	proc_adc: process(clk, SPI_CS, SPI_CLK)
		variable i : integer := 0;
		begin
			if SPI_CS = "0" then
				if SPI_CLK = '0' and SPI_CLK'event then
					SPI_MISO <= valeur(i);
					i := i + 1;
				end if;
			else
				i := 0;
			end if;
		end process;

END;
