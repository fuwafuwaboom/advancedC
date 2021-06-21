#define _CRT_SECURE_NO_WARNINGS 1
//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果：

//A选手说：B第二，我第三；
//B选手说：我第二，E第四；
//C选手说：我第一，D第二；
//D选手说：C最后，我第三；
//E选手说：我第四，A第一；

//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。

#include <stdio.h>

void swap(int* a, int* b)
{
    int c = *a;
    *a = *b;
    *b = c;
}

void perm(int str[], int index, int str_size)
{
    int i = 0, j = 0;

    if (index == str_size)
    {
        /* 输出当前的排列 */
        if (((str[1] == 2 && str[0] != 3) || (str[1] != 2 && str[0] == 3))
            && ((str[1] == 2 && str[4] != 4) || (str[1] != 2 && str[4] == 4))
            && ((str[2] == 1 && str[3] != 2) || (str[2] != 1 && str[3] == 2))
            && ((str[2] == 5 && str[3] != 3) || (str[2] != 5 && str[3] == 3))
            && ((str[4] == 4 && str[0] != 1) || (str[4] != 4 && str[0] == 1)))
        printf("A=%d B=%d C=%d D=%d E=%d\n", str[0], str[1], str[2], str[3], str[4]);
    }
    else
    {
        for (j = index; j < str_size; j++)
        {
            swap(&str[j], &str[index]);
            perm(str, index + 1, str_size);
            swap(&str[j], &str[index]);
        }
    }
}
int main()
{
    int a[5] = { 1,2,3,4,5 };
    perm(a, 0, 5);
    return 0;
}



