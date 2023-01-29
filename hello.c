#include <linux/module.h>       /* Needed by all modules */
#include <linux/kernel.h>       /* Needed for KERN_ERR */
#include <linux/init.h>         /* Needed for macros */

MODULE_LICENSE("GPL");

MODULE_AUTHOR("Avinash Boddu");

MODULE_DESCRIPTION("Prints Hello World and Goodbye");

int init_module(void)
{
        // Since we want to print to the console, we must have a log level less than 4, hence the use of KERN_ERR
        printk(KERN_INFO "Hello World\n");
        return 0;
}

void cleanup_module(void)
{
        printk(KERN_INFO "Goodbye!\n");
}