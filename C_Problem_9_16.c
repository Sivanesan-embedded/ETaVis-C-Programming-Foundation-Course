#include <stdio.h>
int main()
{
    int a[50] = {
    4, 2, 9, 1, 7, 3, 8, 6, 5, 0,
    1, 5, 7, 3, 9, 8, 4, 2, 6, 0,
    6, 8, 5, 2, 4, 1, 3, 7, 9, 0,
    7, 4, 3, 8, 6, 5, 2, 1, 9, 0,
    9, 6, 1, 4, 8, 7, 5, 3, 2, 0
};
    int b[50] = {
    4, 2, 9, 1, 7, 3, 8, 6, 5, 0,
    1, 5, 7, 3, 9, 8, 4, 2, 6, 0,
    6, 8, 5, 2, 4, 1, 3, 7, 9, 0,
    7, 4, 3, 8, 6, 5, 2, 1, 9, 0,
    9, 6, 1, 4, 8, 7, 5, 3, 2, 0
};
    int c[51],last = 50,rem = 0,sum = 0,go = 1;
    
    for (int i = 49;i>=0;i--)
    {
        sum = a[i] + b[i] + rem;
        //printf("%d\n",sum);
        if (sum/10)
        {
            c[last--] = (sum%10);
            rem = (sum/10);
        }
        else
        {
            c[last--] = sum;
            rem = 0;
        }
    }
    c[0] = rem;
    
    for (int i = 0; i < 50;i++)
    {
        printf("%d",a[i]);
    }
    printf("\n");
    for (int i = 0; i < 50;i++)
    {
        printf("%d",b[i]);
    }
    printf("\n");
    for (int i = 0; i < 51;i++)
    {
        if (c[i] == 0 && go)
        {
            continue;
        }
        else
        {
            go = 0;
        }
        printf("%d",c[i]);
    }
}