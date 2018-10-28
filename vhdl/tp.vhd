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

entity pmodals_led is
    Port ( clk : in  STD_LOGIC; -- horloge système
           reset : in  STD_LOGIC; -- reset 
           SPI_MISO : in  STD_LOGIC; -- miso
           Led : out  STD_LOGIC_VECTOR 7 downto 0;
		   SPI_CLK : in  STD_LOGIC;
		   SPI_CS : in  STD_LOGIC); 
end pmodals_led;

architecture architecture_pmodals_led of pmodals_led is

-- déclaration du composant à instancier
component spi_master is
 GENERIC(
    slaves  : INTEGER := 4;  --number of spi slaves
    d_width : INTEGER := 2); --data bus width
  PORT(
    clock   : IN     STD_LOGIC;                             --system clock
    reset_n : IN     STD_LOGIC;                             --asynchronous reset
    enable  : IN     STD_LOGIC;                             --initiate transaction
    cpol    : IN     STD_LOGIC;                             --spi clock polarity
    cpha    : IN     STD_LOGIC;                             --spi clock phase
    cont    : IN     STD_LOGIC;                             --continuous mode command
    clk_div : IN     INTEGER;                               --system clock cycles per 1/2 period of sclk
    addr    : IN     INTEGER;                               --address of slave
    tx_data : IN     STD_LOGIC_VECTOR(d_width-1 DOWNTO 0);  --data to transmit
    miso    : IN     STD_LOGIC;                             --master in, slave out
    sclk    : BUFFER STD_LOGIC;                             --spi clock
    ss_n    : BUFFER STD_LOGIC_VECTOR(slaves-1 DOWNTO 0);   --slave select
    mosi    : OUT    STD_LOGIC;                             --master out, slave in
    busy    : OUT    STD_LOGIC;                             --busy / data ready signal
    rx_data : OUT    STD_LOGIC_VECTOR(d_width-1 DOWNTO 0)); --data received
end component;

-- signaux inverse du reset
signal spireset : STD_LOGIC;
-- horloge de sortie
signal out_enable : STD_LOGIC;

signal busy_line : STD_LOGIC;
signal spi_data : STD_LOGIC_VECTOR(14 DOWNTO 0);;

begin

	spireset <= not(reset);
	ut_spi : spi_master port map (clock => clk, miso => SPI_MISO, reset_n => spireset, enable => out_enable,
									rx_data => spi_data, sclk => SPI_CLK, ss_n => SPI_CS, busy => busy_line);

	process(spi_data, busy_line, clk, reset)
	begin
		if reset = '1' then
			Led <= "00000000";
		end if;
		if busy = '1' then
			Led <= spi_data;
			out_enable <= '1';
		else
			out_enable <='0';
		end if;
		
	end process;
end architecture_pmodals_led;