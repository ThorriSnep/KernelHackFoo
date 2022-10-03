#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>

MODULE_AUTHOR("Thorri Snep");
MODULE_DESCRIPTION("A Kernal Module that likes to Mows");
MODULE_LICENSE("BSD");
MODULE_VERSION("0.0.1");

static int __init mowmow_lkm_init(void)
{
	printk(KERN_INFO "Mow mow mow, hallo!\n");
	return 0;		/* success */
}

static void __exit mowmow_lkm_exit(void)
{
	printk(KERN_INFO "Mow mow mow, bye!\n");
}

module_init(mowmow_lkm_init);
module_exit(mowmow_lkm_exit);