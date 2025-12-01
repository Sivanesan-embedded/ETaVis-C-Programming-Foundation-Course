#include <stdio.h>
int main()
{
    unsigned long int x,num,prime=1,count = 0;
    
    printf("Enter a number: ");
    scanf("%ld",&x);
    
    for (;x!=0;)
    {
        prime = 1;
        num = x % 10;
        for (int i = 2;i<num;i++)
        {
            if (!(num % i))
            {
                prime = 0;
                break;
            }
        }
        if (prime && (num!=1))
        {
            count++;
        }
        x/=10;
    }
    printf("%d\n",count);
}