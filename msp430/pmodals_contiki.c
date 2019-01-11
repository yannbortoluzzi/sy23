#include <stdio.h>
#include "contiki.h"
#include "dev/serial-line.h"
#include "dev/spi.h"

/* -------------------------------------------------------------------------- */
PROCESS(spi_process, "SPI");
AUTOSTART_PROCESSES(&spi_process);
PROCESS_THREAD(spi_process, ev, data) 
{
  PROCESS_BEGIN();
  int d[2];
  spi_init(); //initialisation spi
  P2DIR = 0x1;
 

  while(1) {
    int octet;
    P2OUT = 0x0;
    SPI_READ(d[0]);
    SPI_READ(d[1]);
    P2OUT = 0x1;
    octet = (d[0]<<3)|(d[1]>>4);   
    printf("lumiere = %d \r\n", octet);

  }
  PROCESS_END();
}
/*---------------------------------------------------------------------------*/

	
