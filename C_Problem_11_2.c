#include <stdio.h>

void increment_number(int*);

int main()
{
    int x[5];
    
    for (int i = 0;i < 5;i++)
    {
    printf("Enter a number %d: ",i+1);
    scanf("%d",&x[i]);
    }
    increment_number(x);
    for (int i = 0; i < 5;i++)
    {
        printf("Number %d: %d\n\n",i+1,x[i]);
    }
}

void increment_number(int *p)
{
    for (int i = 0;i < 5;i++)
    {
        *p += 1;
         p++;
    }
}