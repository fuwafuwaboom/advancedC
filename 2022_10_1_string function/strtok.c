#define _CRT_SECURE_NO_WARNINGS 1

//strtok ×Ö·û´®ÇÐ¸îº¯Êý

#include<stdio.h>
#include<string.h>
#include<assert.h>

int main()
{
	char* arr1[] = "ytxiao0109@gmail.com";
	char* p="@.";
	char* tmp[20] = { 0 };
	strcmp(tmp, arr1);
	strtok(tmp, p);
	return 0;  
}
