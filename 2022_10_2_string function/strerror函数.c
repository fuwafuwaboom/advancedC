#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<errno.h>//�������ͷ�ļ�
//strerror���� 
//ʹ�ÿ⺯����ʱ�� �������ʧ�� �ͻ����ô�����
//������ͻᱻ�洢��errno������ ȫ�ִ��������
//int errno
//�����������5
//������θ��ݴ������ҵ������ԭ���أ�
//strerror �Ĳα��������� ����ֵ�Ǵ�����Ϣ��һ���ַ�����
int main()
{
	printf("%s\n", strerror(0));
	printf("%s\n", strerror(1));
	printf("%s\n", strerror(2));
	printf("%s\n", strerror(3));
	printf("%s\n", strerror(4));
	printf("%s\n", strerror(5));
	FILE* pf = fopen("test.txt", "r");//û������ļ� pf���ǿ�ָ��
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));//errno�Ǵ�Ŵ�����ı���
		return 1;
	}
	fclose(pf);
	pf = NULL;
	return 0;
}