
#include <linux/kernel.h>
#include <linux/syscalls.h>

asmlinkage int addition(int num1, int num2){
	int sum;
	sum = num1+num2;
	printk("sum of the two numbers is %d", sum);
	printk("pid: %d",current->pid);
	printk("The two arguments are %d and %d", num1, num2);
	return sum;
}


