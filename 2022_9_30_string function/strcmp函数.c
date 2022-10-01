#define _CRT_SECURE_NO_WARNINGS 1
//字符串比较的含义是指：逐个字符的比较
//当有一个字符不等，比较这两个字符，大的字符所在的字符串大
//如果一直到\0两个字符串都相等，那么就判断为两个字符串相等
#include<stdio.h>
#include<string.h>
int main()
{
	printf("%d\n", strcmp("abbb", "abc"));//第一个字符串小于第二个就返回负值
	printf("%d\n", strcmp("abc", "abc"));
	printf("%d\n", strcmp("abd", "abc"));
	return 0;//实际上小于是返回-1 大于是返回1 等于是返回0
}