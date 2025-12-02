#include <stdio.h>
int main()
{
    int x,i=2,num=0,prime = 1,count = 0;
    
    printf("Enter a number: ");
    scanf("%d",&x);
    
    while (x)
    {
        i = 2;
        num = x % 10;
        prime = 1;
        while (i < num)
        {
            if (!(num % i))
            {
                prime = 0;
                break;
            }
            i++;
        }
        if (prime && num!=1)
        {
            count++;
        }
        x /= 10;
    }
    printf("%d\n",count);
}