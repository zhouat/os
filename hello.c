#include <linux/module.h>
#include <linux/kernel.h>
#include <asm/unistd.h>

MODULE_LICENSE("GPL");

static int __init begin(void)
{
        printk("linux kernel : 保健哥威武！！ \n");
        return 0;
}

static void __exit end(void)
{
        printk("哥走了啊！\n");			
}

module_init(begin);
module_exit(end);
