#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1

//strtok �и��ַ�������

#include<stdio.h>
#include<string.h>

/*
int main()
{
	char arr[] = "ytxiao0109@gmail.com";
	char* p = "@.";//�ָ���ַ�����
	char tmp[30] = { 0 };
	strcpy(tmp, arr);//����strtok������Ѹı��и���ַ���������һ�����ȿ���
	printf("%s\n",strtok(tmp, p));//��һ��ִ�У���ѵ�һ����Ǹĳ�\0��ͬʱ���ص�һ�����ַ����ĵ�ַ
	printf("%s\n",strtok(NULL, p));//�ڶ���ִ�У�����ָ�룬������ҵڶ�����ǣ��ĳ�\0�����صڶ������ַ����ĵ�ַ
	printf("%s\n",strtok(NULL, p));//������ִ�У�����ָ�룬�ҵ�������ǣ��ޱ�ǣ����ص������ֵĵ�ַ
	return 0;
}
*/
int main()
{
	char arr[] = "ytxiao0109@gmail.com";
	char* p = "@.";//�ָ���ַ����� ���ָ���Ϊ�ո�Ҳ�У�
	char tmp[30] = { 0 };
	strcpy(tmp, arr);
	
	char* ret = NULL;
	for (ret = strtok(tmp, p); ret != NULL; ret = strtok(NULL, p))
	{
		printf("%s\n", ret);
	}
	return 0;
}
//strtok ���������Ǵ�NULLΪ��һ��������ʱ������һ�ε�ĩβ��ʼ
//˵��strtok�����м���Ĺ���
//���Դ󵨲²� ��������ڲ�Ӧ�û����һ����̬������static��