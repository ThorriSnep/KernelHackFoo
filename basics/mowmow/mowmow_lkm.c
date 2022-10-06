#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>

MODULE_AUTHOR("Thorri Snep");
MODULE_DESCRIPTION("A Kernel Module that likes to Mow");
MODULE_LICENSE("BSD");
MODULE_VERSION("0.1");

static int __init mowmow_lkm_init(void)
{
	pr_info("Mow mow mow, hallo!\n");
	return 0;
}

static void __exit mowmow_lkm_exit(void)
{
	pr_info("Mow mow mow, bye!\n");
}

module_init(mowmow_lkm_init);
module_exit(mowmow_lkm_exit);
