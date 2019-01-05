#include <msp430.h>
//UART
void init_uart(void){
  DCOCTL = 0;              // Select lowest DCO settings
  BCSCTL1 = CALBC1_1MHZ;        // Set DCO to 1 MHz
  DCOCTL = CALDCO_1MHZ;
  P1SEL = BIT1 + BIT2 ;       // Select UART RX/TX function on P1.1,P1.2
  P1SEL2 = BIT1 + BIT2;
  UCA0CTL1 |= UCSSEL_2;       // UART Clock -> SMCLK
  UCA0BR0 = 104;            // Baud Rate Setting for 1MHz 9600
  UCA0BR1 = 0;            // Baud Rate Setting for 1MHz 9600
  UCA0MCTL = UCBRS_1;         // Modulation Setting for 1MHz 9600
  UCA0CTL1 &= ~UCSWRST; 
}

void printe(char *text)  //affichage texte
{
  unsigned int i = 0;
  while(text[i] != '\0')//on parcourt tous les char
  {
    while (!(IFG2&UCA0TXIFG));   
    UCA0TXBUF = text[i];      // On envoie un char sur le buffer
    i++;
  }
}

void print_number( int num) //affichage nombre
{
  char buf[6];
  char *str = &buf[5];

  *str = '\0';

  do
  {
    unsigned long m = num;
    num /= 10;
    char c = (m - 10 * num) + '0';
    *--str = c;
  } while(num);

  printe(str);
}

//SPI
void init_pin(int pin)
{
  P1SEL |= (1 << (pin));
  P1SEL2|= (1 << (pin));
}

void init_spi(void){
  UCB0CTL1 = UCSWRST | UCSSEL_2;      
  UCB0CTL0 = UCCKPH | UCMSB | UCSYNC | UCMST; 
  init_pin(5); //SCK
  init_pin(7);//MOSI
  init_pin(6);//MISO
  UCB0CTL1 |= UCSSEL_2; 
  UCB0BR0 = 16 & 0xFF;
  UCB0BR1 = (16 >> 8 ) & 0xFF;
  UCB0CTL1 &= ~UCSWRST;   
}

int spi_send(int data)
{
  UCB0TXBUF = data; //on remplit le buffer
  while (UCB0STAT & UCBUSY); //on attend que le buffer se vide

  return UCB0RXBUF; //on retourne la valeur renvoyé
}




int main (void){
init_uart();
init_spi();
P2DIR = 0x1; // passage de la broche en sortie
int receive[2];
           
  while(1){
    P2OUT = 0x0; //parametrage port
    receive[0]=spi_send(0);
    receive[1]=spi_send(0);
    P2OUT = 0x1;//parametrage port
    int lux=(receive[0]<<3)|(receive[1]>>4); //décalage de bit et assemblage des 2 octets 
    printe("Lumiere :");
    print_number(lux);
    printe("\r\n");
    delay(100);
  }
}