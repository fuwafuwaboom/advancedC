#define _CRT_SECURE_NO_WARNINGS 1

//�ڴ渴�ƺ���

#include<stdio.h>
#include<assert.h>
//my_memcpy
void* my_memcpy(void* dest,const void* src,size_t num)
{
	void* ret = NULL;
	assert(dest && src);
	//void* ָ�� �޷�ֱ�ӽ����� �� ++ -- ���� ��Ϊδ֪������Ȩ�޴�С�Ͳ���
	while (num--)
	{
		*((char*)dest)++ = *((char*)src)++;
		//dest = (char*)dest + 1;//Ϊʲô������++�� ��Ϊǿ������ת����Ե���dest ��++��ʱ��dest��Ȼ��void*���� ��Ϊ++�����ȼ���ǿ������ת����
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
	//ϣ����arr1�е�ǰ������ֿ�����arr2��
	//memcpy(arr2, arr1, 20);//Ŀ�� Դͷ �ֽ���
	//void* memcpy ( void* destination, const void* source, size_t num)
	//���Կ���ָ��������void* ���Կ��Խ��ո���ָ������
	my_memcpy(arr2, arr1, 20);
	for (int i = 0; i < 20; i++ )
	{
		printf("%d ", arr2[i]);
	}
	return 0;
}