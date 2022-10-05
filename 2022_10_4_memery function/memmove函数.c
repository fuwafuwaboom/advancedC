#define _CRT_SECURE_NO_WARNINGS 1

// 内存移动函数

#include<stdio.h>
#include<assert.h>
//my_memmove
void* my_memmove(void* dest, const void* src, size_t num)
{
	//有些情况要从前向后拷贝 有些情况要从后向前拷贝
	assert(dest && src);
	if (dest < src)
	{
		//前->后
		while (num--)
		{
			*((char*)dest)++ = *((char*)src)++;
		}
		return ;
	}
	else
	{
		//后->前
		while (num--)
		{
			*((char*)dest+num) = *((char*)src+num);
		}
		return;
	}
}
//memcpy
int main()
{
	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//
	int arr2[20] = { 0 };
	//如果想把自己的内存复制给自己 有可能会发生内存重叠 重叠时就会发生源数据的改变
	//所以memcpy应该拷贝不重叠的内存

	//而重叠的情况就交给memmvoe函数
	//void* memmove(void* dest, const void* src, size_t num)
	my_memmove(arr1, arr1 + 5, 20);
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr1[i]);
	}
	return 0;
}
