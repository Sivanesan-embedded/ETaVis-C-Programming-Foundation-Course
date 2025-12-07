#include <stdio.h>

void addnumbers(int[],int[],int[]);
void print(int[]);

int main()
{
    int number1[] = {
    3, 9, 1, 4, 6, 2, 8, 7, 5, 0,
    2, 4, 6, 1, 3, 9, 7, 8, 5, 0,
    5, 7, 8, 2, 9, 1, 4, 6, 3, 0,
    8, 3, 2, 7, 5, 4, 9, 1, 6, 0,
    1, 6, 9, 3, 8, 7, 2, 4, 5, 0
    };
    
    int number2[] = {
    4, 2, 9, 1, 7, 3, 8, 6, 5, 0,
    1, 5, 7, 3, 9, 8, 4, 2, 6, 0,
    6, 8, 5, 2, 4, 1, 3, 7, 9, 0,
    7, 4, 3, 8, 6, 5, 2, 1, 9, 0,
    9, 6, 1, 4, 3, 2, 8, 5, 7, 0
    };
    
    int result[51];
    addnumbers(number1,number2,result);
    print(result);
}

void addnumbers(int number1[],int number2[],int result[])
{
    int k = 50,addition,rem=0;
    for (int i = 49;i>=0;i--)
    {
        addition = number1[i] + number2[i] + rem;
        if (!(addition/10))
        {
            result[k--] = addition;
            rem = 0;
        }
        else
        {
            result[k--] = addition % 10;
            rem = addition / 10;
        }
    }
    if (rem)
    {
        result[k] = rem;
    }
    else
    {
        result[k] = 0;
    }
}

void print(int result[])
{
    int check = 1;
    for (int i = 0;i < 51;i++)
    {
        if (!(result[i]) && check)
        {
            continue;
        }
        printf("%d ",result[i]);
        check = 0;
    }
}