#include <msp430.h>

char message[] = { "Hello World ! \r\n" };
volatile char received_ch = 0;

void print(char *text)
{
	unsigned int i = 0;
	while(text[i] != '\0')				// Check for end of string
	{
		while (!(IFG2&UCA0TXIFG));		// Check if TX is ongoing
		UCA0TXBUF = text[i];			// TX -> current char
		i++;							// Increment counter
	}
}

void main(void)
{
	WDTCTL = WDTPW + WDTHOLD;                 		// Stop watchdog timer

	P1OUT |= BIT5;
	P1DIR |= BIT5;                     				// Set 1.5 as Output (Latch)

	P1SEL = BIT1 | BIT2 | BIT4;							// Select P1.2 -> SIMO (Data)
	P1SEL2 = BIT1 | BIT2 | BIT4;							// Select P1.4 -> CLK (Clock)

	UCA0CTL1 |= UCSWRST;                     		// Hold USCI in reset state
	UCA0CTL0 |= UCCKPL + UCMSB + UCMST + UCSYNC;  			// 3-pin, 8-bit, SPI Master
	UCA0CTL1 |= UCSSEL_2;                     		// Clock -> SMCLK
	UCA0BR0 = 0x02;                          		// SPI CLK -> SMCLK/2
	UCA0BR1 = 0; 
   	UCA0MCTL = 0; // No modulation
	UCA0CTL1 &= ~UCSWRST;                     		// Initialise USCI module

	

	while(1)
	{	
		while (!(IFG2 & UCA0TXIFG)); // USCI_A0 TX buffer ready?
		UCA0TXBUF = 0xAA; // Send 0xAA over SPI to Slave
		while (!(IFG2 & UCA0RXIFG)); // USCI_A0 RX Received?
		received_ch = UCA0RXBUF; // Store received data
		P1OUT |= (BIT5); // Unselect Device
		__delay_cycles(100000);
	}
}
