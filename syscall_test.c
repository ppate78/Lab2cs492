
#include <stdio.h>
#include <linux/kernel.h>
#include <sys/syscall.h>
#include <unistd.h>
int main()
{
        int syscheck = syscall(332, 10, 5);
	printf("Pratim Patel.\n The pid is %d\n", getpid());
	printf("the arguments given to the first syscall are 10 and 5\n");
	printf("system call returned %d\n", syscheck);
	char str[4] = "booo";
	int count = syscall(333, str);
	printf("The arguments given to the second syscall are booo\n");
	printf("second system call: o's replaced in booo is %d\n", count);
	char longstr[130] = "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz";
	int longcount = syscall(333, longstr);
	printf("the arguments given to the longcount syscall is %s\n", longstr);
	printf("long syscall: o's replaced in long string is %d\n", longcount);
	return ("The return value of the first syscall is %d \n the return value of the second syscall is %d", syscheck, count);
	}
