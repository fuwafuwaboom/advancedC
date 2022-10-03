#define _CRT_SECURE_NO_WARNINGS 1
//想要使用库函数，一定要引用对应的头文件

//strerror

#include<stdio.h>
#include<errno.h>
#include<string.h>

/*
int main()
{
	//打开文件失败， 返回NULL
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));//先转换错误码 再打印错误信息
		return 1;
	}
	//关闭文件
	fclose(pf);
	pf = NULL;

	A1();
	return 0;
}
*/

/*
//perror函数 —— 和strerror很像 但是更简单操作
int main()
{
	//打开文件失败， 返回NULL
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		perror("fopen");//直接打印错误信息 更加简单 
		return 1;
	}
	//关闭文件
	fclose(pf);
	pf = NULL;
	return 0;
}
*/