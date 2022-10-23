#define _CRT_SECURE_NO_WARNINGS 1
//内存比较函数
#include<stdio.h>
int main()
{
	float arr1[] = { 1.0,2.0,3.0,4.0 };
	float arr2[] = { 1.0,3.0};
	int ret = memcmp(arr1, arr2, 4);//比较前4个字节的内存的大小 =为0 >为1 <为-1
	//若前面的内存已经不同 则提前结束
	printf("%d\n", ret);
	return 0;
}