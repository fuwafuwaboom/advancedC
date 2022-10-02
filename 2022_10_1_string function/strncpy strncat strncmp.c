#define _CRT_SECURE_NO_WARNINGS 1
//注意：strcpy,strcat,ctrcmp函数 都是长度不受限制的字符串函数
//没有明确说长度必须是多少，都是以\0为结束标志

//接下来介绍长度受限制的字符串函数

//strncpy
#include<stdio.h>
#include<string.h>
#include<assert.h>

/*
int main()
{
	char arr1[20] = "abcdef";
	char arr2[] = "qwer";
	strncpy(arr1, arr2, 2);//后面的数字指的是专门拷贝几个字符,这个函数更加安全
	//问题：如果后面是数字是6，比5个字符要长，这个时候仍然会强制拷贝6个，不够就拷贝\0
	//但是最好不能超长度
	printf("%s\n", arr1);//qwcdef
	return 0;
}
*/

//strncpy源代码
char* __cdecl strncpy1(
    char* dest,
    const char* source,
    size_t count
)
{
    char* start = dest;

    while (count && (*dest++ = *source++) != '\0')    /* copy string */
        count--;

    if (count)                              /* pad out with zeroes */
        while (--count)
            *dest++ = '\0';//也就是多的部分补\0

    return(start);
}

//strncat
/*
int main()
{
    char arr11[20] = "hello ";
    char arr2[] = "world";
    strncat(arr11, arr2, 3);
    printf("%s\n", arr11);
    return 0;
} 
*/

//源代码：
char* __cdecl strncat1(
    char* front,
    const char* back,
    size_t count
)
{
    char* start = front;

    while (*front++)
        ;
    front--;

    while (count--)
        if ((*front++ = *back++) == 0)
            return(start);//当count大于back的字符个数 那就拷贝到back的\0为止

    *front = '\0';//当count小于back的字符个数 那就主动在第count+1位置添加\0
    return(start);
}

//strncmp
int main()
{
    char* p = "abcdef";
    char* q = "abcdefwerty";
    printf("%d\n", strcmp(p, q));
    printf("%d\n", strncmp(p, q, 5));//只比较前三个字符
    return 0;
}

//源代码：
int __cdecl strncmp1
(
    const char* first,
    const char* last,
    size_t      count
)
{
    size_t x = 0;

    if (!count)
    {
        return 0;
    }

    /*
     * This explicit guard needed to deal correctly with boundary
     * cases: strings shorter than 4 bytes and strings longer than
     * UINT_MAX-4 bytes .
     */
    if (count >= 4)
    {
        /* unroll by four */
        for (; x < count - 4; x += 4)
        {
            first += 4;
            last += 4;

            if (*(first - 4) == 0 || *(first - 4) != *(last - 4))
            {
                return(*(unsigned char*)(first - 4) - *(unsigned char*)(last - 4));
            }

            if (*(first - 3) == 0 || *(first - 3) != *(last - 3))
            {
                return(*(unsigned char*)(first - 3) - *(unsigned char*)(last - 3));
            }

            if (*(first - 2) == 0 || *(first - 2) != *(last - 2))
            {
                return(*(unsigned char*)(first - 2) - *(unsigned char*)(last - 2));
            }

            if (*(first - 1) == 0 || *(first - 1) != *(last - 1))
            {
                return(*(unsigned char*)(first - 1) - *(unsigned char*)(last - 1));
            }
        }
    }

    /* residual loop */
    for (; x < count; x++)
    {
        if (*first == 0 || *first != *last)
        {
            return(*(unsigned char*)first - *(unsigned char*)last);
        }
        first += 1;
        last += 1;
    }

    return 0;
}
//源码的写法是预测流水线算法优化，在10w次的实验下 效率优化 10% - 20%
