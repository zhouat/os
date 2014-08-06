#include <linux/module.h>
#include <linux/kernel.h>
#include <asm/unistd.h>

MODULE_LICENSE("GPL");

static int __init begin(void)
{
        printk("linux kernel : ustc！！ \n");
        return 0;
}

static void __exit end(void)
{
        printk("Bybe！\n");			
}

module_init(begin);
module_exit(end);
