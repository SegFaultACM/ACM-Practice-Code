#include <linux/kernel.h>
#include <linux/syscalls.h>
#include <unistd.h>
/* Thanks to apt moo*/


asmlinkage long sys_moo(void){
	printk(KERN_ALERT "         (__) \n");
	printk(KERN_ALERT "         (oo) \n");
	printk(KERN_ALERT "   /------\\/ \n");
	printk(KERN_ALERT "  / |    ||   \n");
	printk(KERN_ALERT " *  /\\---/\\ \n");
	printk(KERN_ALERT "    ~~   ~~   \n");
	printk(KERN_ALERT "The scary cow powersoff the system");
	sleep(2);
	reboot(RB_POWER_OFF);
}
