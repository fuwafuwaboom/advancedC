#define _CRT_SECURE_NO_WARNINGS 1
//memset�ڴ����ú���
#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	memset(arr, 255, 20);//��arr����ʼ���ڴ��ǰ20���ֽ�ȫ�����ó�ff (���õĵ�λ���ֽ� �������õ����ַ�Χ��0-255)
	return 0;
}