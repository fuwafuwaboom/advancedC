#define _CRT_SECURE_NO_WARNINGS 1
//�ַ����Ƚϵĺ�����ָ������ַ��ıȽ�
//����һ���ַ����ȣ��Ƚ��������ַ�������ַ����ڵ��ַ�����
//���һֱ��\0�����ַ�������ȣ���ô���ж�Ϊ�����ַ������
#include<stdio.h>
#include<string.h>
int main()
{
	printf("%d\n", strcmp("abbb", "abc"));//��һ���ַ���С�ڵڶ����ͷ��ظ�ֵ
	printf("%d\n", strcmp("abc", "abc"));
	printf("%d\n", strcmp("abd", "abc"));
	return 0;//ʵ����С���Ƿ���-1 �����Ƿ���1 �����Ƿ���0
}