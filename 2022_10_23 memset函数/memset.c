#define _CRT_SECURE_NO_WARNINGS 1
//memset内存设置函数
#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	memset(arr, 255, 20);//把arr处开始的内存的前20个字节全部设置成ff (设置的单位是字节 所以设置的数字范围是0-255)
	return 0;
}