#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<assert.h>

char* my_strstr(const char* str1, const char* str2)
{
	assert(str1 && str2);
	const char* s1 = NULL;
	const char* s2 = NULL;
	const char* cp = str1;

	if (*str2 == '\0')
	{
		return (char*)str1;
	}
	while (*cp)
	{
		s1 = cp;//cp记录每次匹配的起点
		s2 = str2;
		while (*s1 && *s2 && (*s1 == *s2))
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return (char*)cp;
		}
		cp++;
	}
	return NULL;
}

int main()
{
	char arr1[] = "abbbcdef";
	char arr2[] = "bbc";
	if (my_strstr(arr1, arr2) == NULL)
	{
		printf("没找到\n");
	}
	printf("找到了：%s\n", my_strstr(arr1, arr2));
	return 0;
}