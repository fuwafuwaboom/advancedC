#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<assert.h>

int my_strcmp(const char* str1,const char* str2)
{
	assert(str1, str2);
	while (*str1 == *str2)
	{
		if (*str1 == '\0')
		{
			return 0;
		}
		str1++;
		str2++;
	}
	if (*str1 > *str2)
	{
		return 1;
	}
	else
	{
		return -1;
	}
	//return *str1 - *str2;
}

int main()
{
	char* p = "abcdef";
	char* q = "abd";
	printf("%d\n", my_strcmp(p, q));
	return 0;
}

//Ô´´úÂë£º

/*Exit£º
*returns - 1 if src <  dst
	* returns  0 if src == dst
	* returns + 1 if src >  dst
	*
	* Exceptions :
	*
	*******************************************************************************/

int __cdecl strcmp1(
		const char* src,
		const char* dst
	)
{
	int ret = 0;

	while ((ret = *(unsigned char*)src - *(unsigned char*)dst) == 0 && *dst)
	{
		++src, ++dst;
	}

	return ((-ret) < 0) - (ret < 0); // (if positive) - (if negative) generates branchless code
}
