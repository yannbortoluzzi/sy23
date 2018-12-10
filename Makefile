#$@  	Le nom de la cible
#$< 	Le nom de la première dépendance
#$^ 	La liste des dépendances
#$? 	La liste des dépendances plus récentes que la cible
#$* 	Le nom du fichier sans suffixe
#.PHONY: clean mrproper
CC=/opt/msp430/bin/msp430-gcc
STRIP=/opt/msp430/bin/msp430-strip
CPU=msp430g2553
CFLAGS= -Wall -g -mmcu=$(CPU)
LDFLAGS= -mmcu=$(CPU)

NOM=hello

OBJS=$(NOM).o
PGM=$(NOM).elf
SRC=$(NOM).c
ASM=$(NOM).s

all: $(OBJS)
	$(CC) $(LDFLAGS) -o $(PGM) $(OBJS)
	
%.o: %.c
	$(CC) $(CFLAGS) -c $<
	
strip:
	$(STRIP) $(PGM)	
	
asm: $(SRC)
	$(CC) $(CFLAGS) -S -c $<
	
upload:
	mspdebug rf2500 "prog $(PGM)"

clean:
	rm -rf $(PGM) $(OBJS) $(ASM)
