#include <stdio.h>

void disp_total_odd_digits(void);

int main()
{
    disp_total_odd_digits();
}

void disp_total_odd_digits(void)
{
    int x,count = 0;
    printf("Enter a number: ");
    scanf("%d",&x);
    
    while (x)
    {
        if (x%10%2)
        {
            count++;
        }
    x/=10;
    }
    printf("%d\n",count);
}