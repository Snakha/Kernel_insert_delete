#include<linux/module.h>
#include<linux/kernel.h>

MODULE_LICENSE("Dual BSD/GPL");

static int __init hello_init(void)
{
        printk(KERN_ALERT "Hello,init Executed!\n");
        return 0;
}

static void __exit hello_exit(void)
{
        printk(KERN_INFO "GoodBye!\n");
}

module_init(hello_init);
module_exit(hello_exit);
