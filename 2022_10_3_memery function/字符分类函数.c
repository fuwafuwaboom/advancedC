#define _CRT_SECURE_NO_WARNINGS 1
//字符分类函数：判断字符是不是下列各类别

//iscntrl 
//判断一个字符是不是控制字符

//isspace 
//判断一个字符是不是空白字符
//（空格' ',换页'\f',换行'\n',回车'\r',水平制表符'\t',垂直指标符'\v'）

//isdigit
//判断一个字符是不是十进制数字0-9

//isxdigit
//判断是不是十六进制数字0-9，a-f,A-F

//islower
//判断是不是小写字母a-z

//isupper
//判断是不是大写字母A-Z

//isalpha
//判断是不是字母

//isalnum
//判断是不是字母或数字 a-z A-Z 0-9

//ispunct
//判断是不是标点符号（任何不属于字母或者数字的可打印符号）

//isgraph
//判断是不是图形字符

//isprint
//判断是不是可打印字符

#include<stdio.h>
#include<ctype.h>
/*
int main()
{
	char ch = '#';
	printf("%d\n", isdigit(ch));//不是数字字符就返回0 
	//是数字字符就返回非0值
	printf("%d\n", islower(ch));//不是小写字母就返回0
	//是小写字母就返回非0值
	return 0;
}
*/