#define _CRT_SECURE_NO_WARNINGS 1
//��Ҫʹ�ÿ⺯����һ��Ҫ���ö�Ӧ��ͷ�ļ�

//strerror

#include<stdio.h>
#include<errno.h>
#include<string.h>

/*
int main()
{
	//���ļ�ʧ�ܣ� ����NULL
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));//��ת�������� �ٴ�ӡ������Ϣ
		return 1;
	}
	//�ر��ļ�
	fclose(pf);
	pf = NULL;

	A1();
	return 0;
}
*/

/*
//perror���� ���� ��strerror���� ���Ǹ��򵥲���
int main()
{
	//���ļ�ʧ�ܣ� ����NULL
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		perror("fopen");//ֱ�Ӵ�ӡ������Ϣ ���Ӽ� 
		return 1;
	}
	//�ر��ļ�
	fclose(pf);
	pf = NULL;
	return 0;
}
*/