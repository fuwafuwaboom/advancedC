#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<errno.h>//必须包含头文件
//strerror函数 
//使用库函数的时候 如果调用失败 就会设置错误码
//错误码就会被存储在errno变量中 全局错误码变量
//int errno
//比如错误码是5
//但是如何根据错误码找到错误的原因呢？
//strerror 的参变量是数字 返回值是错误信息（一个字符串）
int main()
{
	printf("%s\n", strerror(0));
	printf("%s\n", strerror(1));
	printf("%s\n", strerror(2));
	printf("%s\n", strerror(3));
	printf("%s\n", strerror(4));
	printf("%s\n", strerror(5));
	FILE* pf = fopen("test.txt", "r");//没有这个文件 pf就是空指针
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));//errno是存放错误码的变量
		return 1;
	}
	fclose(pf);
	pf = NULL;
	return 0;
}