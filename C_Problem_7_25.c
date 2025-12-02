#include <stdio.h>

void disp_single_digit_prime(void);

int main()
{
    disp_single_digit_prime();
}

void disp_single_digit_prime(void)
{
    int prime = 1,count=0,x,num;
    
    printf("Enter a number: ");
    scanf("%d",&x);
    
    while (x)
    {
        prime = 1;
        num = x % 10;
       // printf("%d\n",num);
        for (int j = 2; j < num;j++)
        {
            if (!(num % j))
            {
                prime = 0;
                break;
            }
        }
        if (prime && num!=1)
        {
            count++;
        }
        x /= 10;
    }
    printf("%d\n",count);
}