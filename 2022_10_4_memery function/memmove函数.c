#define _CRT_SECURE_NO_WARNINGS 1

// �ڴ��ƶ�����

#include<stdio.h>
#include<assert.h>
//my_memmove
void* my_memmove(void* dest, const void* src, size_t num)
{
	//��Щ���Ҫ��ǰ��󿽱� ��Щ���Ҫ�Ӻ���ǰ����
	assert(dest && src);
	if (dest < src)
	{
		//ǰ->��
		while (num--)
		{
			*((char*)dest)++ = *((char*)src)++;
		}
		return ;
	}
	else
	{
		//��->ǰ
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
	//�������Լ����ڴ渴�Ƹ��Լ� �п��ܻᷢ���ڴ��ص� �ص�ʱ�ͻᷢ��Դ���ݵĸı�
	//����memcpyӦ�ÿ������ص����ڴ�

	//���ص�������ͽ���memmvoe����
	//void* memmove(void* dest, const void* src, size_t num)
	my_memmove(arr1, arr1 + 5, 20);
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr1[i]);
	}
	return 0;
}
