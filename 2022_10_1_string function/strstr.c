#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<assert.h>

int main()
{
	char arr1[] = "abcdefabcdefg";
	char arr2[] = "cde";
	strstr(arr1, arr2);//��arr1����arr2 �ҵ��˾ͷ��ص�һ���ַ�ָ�� û�ҵ�����NULL��ָ��
	return 0;
}
