#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/version.h>

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("This is a simple test module");
MODULE_AUTHOR("Aperson");

int init_module(void)
{
	printk(KERN_INFO "My first test module loaded! :)\n");
	return 0;
}

void cleanup_module(void)
{
	printk(KERN_INFO "Test module unloaded\n");
}