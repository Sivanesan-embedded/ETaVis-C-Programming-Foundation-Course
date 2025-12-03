#include <stdio.h>
int main()
{
    int a[50] =  { 23, 87, 45, 66, 91, 34, 58, 72, 19, 80,
    41, 65, 99, 54, 73, 28, 62, 47, 83, 90,
    36, 78, 52, 69, 11, 24, 95, 88, 57, 63,
    74, 39, 20, 46, 81, 55, 68, 92, 13, 27,
    49, 71, 84, 96, 33, 59, 76, 97, 22, 44 };
    
    int c[51],last = 50,rem = 0,sum = 0,go = 1;
    
    for (int i = 49;i>=0;i--)
    {
        sum = (a[i] / 10) + (a[i] % 10) + rem;
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
        printf("%d",a[i]%10);
    }
    printf("\n\n");
    
     for (int i = 0; i < 50;i++)
    {
        printf("%d",a[i]/10);
    }
    printf("\n\n");
    
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