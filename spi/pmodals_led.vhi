
-- VHDL Instantiation Created from source file pmodals_led.vhd -- 08:34:28 10/15/2018
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT pmodals_led
	PORT(
		clk : IN std_logic;
		reset : IN std_logic;
		SPI_MISO : IN std_logic;          
		Led : OUT std_logic_vector(7 downto 0);
		SPI_CLK : OUT std_logic;
		SPI_CS : OUT std_logic_vector(3 downto 0)
		);
	END COMPONENT;

	Inst_pmodals_led: pmodals_led PORT MAP(
		clk => ,
		reset => ,
		SPI_MISO => ,
		Led => ,
		SPI_CLK => ,
		SPI_CS => 
	);


