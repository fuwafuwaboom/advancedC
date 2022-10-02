#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<assert.h>

int main()
{
	char arr1[] = "abcdefabcdefg";
	char arr2[] = "cde";
	strstr(arr1, arr2);//在arr1中找arr2 找到了就返回第一个字符指针 没找到返回NULL空指针
	return 0;
}
