#define _CRT_SECURE_NO_WARNINGS 1
//�ڴ�ȽϺ���
#include<stdio.h>
int main()
{
	float arr1[] = { 1.0,2.0,3.0,4.0 };
	float arr2[] = { 1.0,3.0};
	int ret = memcmp(arr1, arr2, 4);//�Ƚ�ǰ4���ֽڵ��ڴ�Ĵ�С =Ϊ0 >Ϊ1 <Ϊ-1
	//��ǰ����ڴ��Ѿ���ͬ ����ǰ����
	printf("%d\n", ret);
	return 0;
}