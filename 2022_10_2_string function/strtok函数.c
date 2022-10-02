#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1

//strtok 切割字符串函数

#include<stdio.h>
#include<string.h>

/*
int main()
{
	char arr[] = "ytxiao0109@gmail.com";
	char* p = "@.";//分割符字符集合
	char tmp[30] = { 0 };
	strcpy(tmp, arr);//由于strtok函数会把改变切割的字符串，所以一般是先拷贝
	printf("%s\n",strtok(tmp, p));//第一次执行，会把第一个标记改成\0，同时返回第一部分字符串的地址
	printf("%s\n",strtok(NULL, p));//第二次执行，传空指针，会继续找第二个标记，改成\0，返回第二部分字符串的地址
	printf("%s\n",strtok(NULL, p));//第三次执行，传空指针，找第三个标记，无标记，返回第三部分的地址
	return 0;
}
*/
int main()
{
	char arr[] = "ytxiao0109@gmail.com";
	char* p = "@.";//分割符字符集合 （分隔符为空格也行）
	char tmp[30] = { 0 };
	strcpy(tmp, arr);
	
	char* ret = NULL;
	for (ret = strtok(tmp, p); ret != NULL; ret = strtok(NULL, p))
	{
		printf("%s\n", ret);
	}
	return 0;
}
//strtok 函数在我们传NULL为第一个参数的时候会从上一次的末尾开始
//说明strtok函数有记忆的功能
//所以大胆猜测 这个函数内部应该会放置一个静态变量（static）