#define _CRT_SECURE_NO_WARNINGS 1
//ע�⣺strcpy,strcat,ctrcmp���� ���ǳ��Ȳ������Ƶ��ַ�������
//û����ȷ˵���ȱ����Ƕ��٣�������\0Ϊ������־

//���������ܳ��������Ƶ��ַ�������

//strncpy
#include<stdio.h>
#include<string.h>
#include<assert.h>

/*
int main()
{
	char arr1[20] = "abcdef";
	char arr2[] = "qwer";
	strncpy(arr1, arr2, 2);//���������ָ����ר�ſ��������ַ�,����������Ӱ�ȫ
	//���⣺���������������6����5���ַ�Ҫ�������ʱ����Ȼ��ǿ�ƿ���6���������Ϳ���\0
	//������ò��ܳ�����
	printf("%s\n", arr1);//qwcdef
	return 0;
}
*/

//strncpyԴ����
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
            *dest++ = '\0';//Ҳ���Ƕ�Ĳ��ֲ�\0

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

//Դ���룺
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
            return(start);//��count����back���ַ����� �ǾͿ�����back��\0Ϊֹ

    *front = '\0';//��countС��back���ַ����� �Ǿ������ڵ�count+1λ�����\0
    return(start);
}

//strncmp
int main()
{
    char* p = "abcdef";
    char* q = "abcdefwerty";
    printf("%d\n", strcmp(p, q));
    printf("%d\n", strncmp(p, q, 5));//ֻ�Ƚ�ǰ�����ַ�
    return 0;
}

//Դ���룺
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
//Դ���д����Ԥ����ˮ���㷨�Ż�����10w�ε�ʵ���� Ч���Ż� 10% - 20%
