#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

static char *nome = "Kernel";
static int vezes = 1;

module_param(nome, charp, 0644);
MODULE_PARM_DESC(nome, "Nome a ser saudado");

module_param(vezes, int, 0644);
MODULE_PARM_DESC(vezes, "Quantas vezes repetir a saudacao");

static int __init hello_init(void)
{
    int i;
    for (i = 0; i < vezes; i++)
        printk(KERN_INFO "Hello, %s!\n", nome);
    return 0;
}

static void __exit hello_exit(void)
{
    printk(KERN_INFO "Goodbye, %s!\n", nome);
}

module_init(hello_init);
module_exit(hello_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Chimello");
MODULE_DESCRIPTION("My first Linux kernel module");
