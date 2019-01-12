/*
   driverport.c

#define    KERN_EMERG     «<0>»     system is unusable             
#define    KERN_ALERT     «<1>»      action must be taken immediately  
#define    KERN_CRIT     «<2>»      critical conditions         
#define    KERN_ERR     «<3>»     error conditions             
#define    KERN_WARNING  «<4>»     warning conditions             
#define    KERN_NOTICE «<5>»     normal but significant condition  
#define    KERN_INFO     “<6>”     informational             
#define    KERN_DEBUG     «<7>»     debug-level messages         

module_param(entier, int, 0644);
module_param_array(tableau, int, NULL, 0644);
module_param_string(chaine, chaine, sizeof(chaine), 0644);

routines gpio

export the GPIO to userspace :
  int gpio_export(unsigned gpio, bool direction_may_change);
reverse gpio_export :
  void gpio_unexport();
create a sysfs link to an exported GPIO node :
  int gpio_export_link(struct device *dev, const char *name, unsigned gpio)
change the polarity of a GPIO node in sysfs :
  int gpio_sysfs_set_active_low(unsigned gpio, int value);
 
set as input or output, returning 0 or negative errno 
  int gpio_is_valid(int number);
  int gpio_direction_input(unsigned gpio);
  int gpio_direction_output(unsigned gpio, int value);

GPIO INPUT:  return zero or nonzero :
  int gpio_get_value(unsigned gpio);
GPIO OUTPUT 
  void gpio_set_value(unsigned gpio, int value);

*/

#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>
#include <asm/uaccess.h>
#include <linux/fs.h>
#include <linux/kdev_t.h>
#include <linux/miscdevice.h>
#include "linuxgpio.h" // pour la simulation
//#include <asm/arch/gpio.h> // pour la carte  raspberry
#include "driverioctl.h"
#include "pmodhat.h"
//#define DEBUG

//Déclaration
//static char buffer[8];
static int i;
static int init_result0;
static int init_result1;
static int init_result2;
static int init_result3;
static int init_result4;
static int init_result5;
static int init_result6;
static int init_result7;
static int PI_KID_JA[8];


static int driverport_open(struct inode *pinode,struct file *pfile) {

#ifdef DEBUG
  printk(KERN_INFO"driverport[open] : flags %04x\n",pfile->f_flags);
#endif  

  return 0;
}

static int driverport_release(struct inode *pinode,struct file *pfile) {

#ifdef DEBUG
   printk(KERN_INFO"driverport[release] : close\n");
#endif   
   return 0;
}


static ssize_t driverport_write(struct file *pfile, const char *poctets, size_t nb,loff_t *pos) {

#ifdef DEBUG
  printk(KERN_INFO"driverport[write] : ecrit %d octets position %lld\n",nb,*pos);
#endif
// A completer obligatoirement
// ecriture sur les GPIOS

	printk(KERN_INFO"Ecriture\n");
	
	
	// Initialisation du tableau de PI_KID_JA pour placer toutes les broches voulues
	PI_KID_JA[0] = PI_KID_JA0;
	PI_KID_JA[1] = PI_KID_JA1;
	PI_KID_JA[2] = PI_KID_JA2;
	PI_KID_JA[3] = PI_KID_JA3;
	PI_KID_JA[4] = PI_KID_JA4;
	PI_KID_JA[5] = PI_KID_JA5;
	PI_KID_JA[6] = PI_KID_JA6;
	PI_KID_JA[7] = PI_KID_JA7;
	
	// Boucle qui vérifie notre buffer (taille de 8 car on push 8 bits)
	for(i=0; i<8; i++){
		// Vérifie si c'est un 0 ou 1 dans le buffer
		switch(poctets[i]){
			case '0':
				// Ecrit sur la broche 0
				gpio_set_value(PI_KID_JA[i], 0);
				break;
			case '1':
				// Ecrit sur la broche 1
				gpio_set_value(PI_KID_JA[i], 1);
				break;
			default:
				// Si l'on rencontre ni de 0 ni de 1 afficher message
				printk("Mauvaise entree\n");
				break;
		}
	}
	
  return nb;
}


static ssize_t driverport_read(struct file *pfile, char *poctets, size_t nb,loff_t *pos) {

#ifdef DEBUG
  printk(KERN_INFO"driverport[read] : demande %d octets position %lld\n",nb,*pos);
#endif

  return nb;
}


static long driverport_ioctl(struct file *pfile,unsigned int cmd,unsigned long arg) {
#ifdef DEBUG	
  printk(KERN_INFO"driverport[ioctl] : cmd : %u\n",cmd);
#endif  
  return 0;
}

struct file_operations driverport_fops = {
	owner: THIS_MODULE,
	open:driverport_open,
	write:driverport_write,
	read:driverport_read,
	unlocked_ioctl:driverport_ioctl,
	release:driverport_release,
};

static struct miscdevice driverport_dev = {
        MISC_DYNAMIC_MINOR,
        "driverport",
        &driverport_fops
};

// initialisation
static int __init driverport_init(void) {
	

  int retour;
#ifdef DEBUG
  printk(KERN_INFO"driverport[init]\n");
#endif    
  retour = misc_register(&driverport_dev); 
  if (retour) {
	  printk(KERN_ERR"driverport[init] : erreur enregistrement\n");
  }
  else {
	  printk(KERN_INFO"driverport[init] : enregistrement OK\n");
  }
// A completer obligatoirement
// initialiser les GPIOS
	
	// Enregistrement des broches
	init_result0 = register_chrdev(0, "PI_KID_JA0", &driverport_fops);
	init_result1 = register_chrdev(0, "PI_KID_JA1", &driverport_fops);
	init_result2 = register_chrdev(0, "PI_KID_JA2", &driverport_fops);
	init_result3 = register_chrdev(0, "PI_KID_JA3", &driverport_fops);
	init_result4 = register_chrdev(0, "PI_KID_JA4", &driverport_fops);
	init_result5 = register_chrdev(0, "PI_KID_JA5", &driverport_fops);
	init_result6 = register_chrdev(0, "PI_KID_JA6", &driverport_fops);
	init_result7 = register_chrdev(0, "PI_KID_JA7", &driverport_fops);
	

  return retour;
}

// suppression
static void __exit driverport_cleanup(void) {
  
  int retour;  
  

#ifdef DEBUG  
  printk(KERN_INFO"driverport[cleanup] : cleanup\n");
#endif  
// A completer obligatoirement
// liberation GPIOS
	
	// Désenregistrement des broches
	unregister_chrdev(init_result0, "PI_KID_JA0");
	unregister_chrdev(init_result1, "PI_KID_JA1");
	unregister_chrdev(init_result2, "PI_KID_JA2");
	unregister_chrdev(init_result3, "PI_KID_JA3");
	unregister_chrdev(init_result4, "PI_KID_JA4");
	unregister_chrdev(init_result5, "PI_KID_JA5");
	unregister_chrdev(init_result6, "PI_KID_JA6");
	unregister_chrdev(init_result7, "PI_KID_JA7");
	
	
	//unregister_chrdev(init_result, "driver");

  retour=misc_deregister(&driverport_dev);
  if (retour) {
	  printk(KERN_ERR"driverport[cleanup] : erreur suppression\n");
  }
  else {
	  printk(KERN_INFO"driverport[cleanup] : suppression OK\n");
  }    
}


// valeurs pour modinfo : description auteur licence
MODULE_DESCRIPTION("driver 8 leds pour pmodhat JA JB JC");
MODULE_AUTHOR("Michel Doussot");
MODULE_LICENSE("GPL");


module_init(driverport_init); // assignation de la fonction d'initialisation
module_exit(driverport_cleanup); // assignation de la fonction de destruction
