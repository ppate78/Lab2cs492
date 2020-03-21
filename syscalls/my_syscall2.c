//takes as a parameter a pointer to a character
//array containing a string(terminated by zero), and returns
//a signed integer(int). if the string size is greater
//than 128 bytes, the sys call should immediately return
//-1. Otherwise, the system call's job is to 
//replace all occurences of the letter "o"
#include<linux/kernel.h>
#include<linux/syscalls.h>
int my_syscall2(char* arr){
	int len;
	int count;
	int i;
	for(len =0; arr[len]!='\0';len++);
	if(len > 128){
		return -1;
	}
	count = 0;
	for(i=0; i<len;i++){
		if(arr[i]=='o'){
			arr[i] = '0';
			count++;
		}
	}
	printk("the amount of o's replaced is %d", count);
	printk("the argument passed is %s", arr);
	printk("The process id is %d", current->pid);
	return count;
}
