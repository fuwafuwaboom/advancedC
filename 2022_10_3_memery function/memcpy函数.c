#define _CRT_SECURE_NO_WARNINGS 1

//内存复制函数

#include<stdio.h>
#include<assert.h>
//my_memcpy
void* my_memcpy(void* dest,const void* src,size_t num)
{
	void* ret = NULL;
	assert(dest && src);
	//void* 指针 无法直接解引用 和 ++ -- 操作 因为未知解引用权限大小和步长
	while (num--)
	{
		*((char*)dest)++ = *((char*)src)++;
		//dest = (char*)dest + 1;//为什么不能用++呢 因为强制类型转换针对的是dest 而++的时候dest仍然是void*类型 因为++的优先级比强制类型转换高
		//src = (char*)src + 1;
	}
	return ret;
}
//memcpy
int main()
{
	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//
	int arr2[20] = { 0 };
	//希望把arr1中的前五个数字拷贝到arr2中
	//memcpy(arr2, arr1, 20);//目标 源头 字节数
	//void* memcpy ( void* destination, const void* source, size_t num)
	//可以看到指针类型是void* 所以可以接收各种指针类型
	my_memcpy(arr2, arr1, 20);
	for (int i = 0; i < 20; i++ )
	{
		printf("%d ", arr2[i]);
	}
	return 0;
}