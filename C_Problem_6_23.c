#include <stdio.h>
int main()
{
    int x,count = 0,temp,i=1;
    
    printf("Enter a number: ");
    scanf("%d",&x);
    temp = x;
    
    while (x)
    {
        i = 1;
        while (i < 10)
        {
            if ((i*i) == (x % 10))
            {
                count++;
            }
            i++;
        }
        x/=10;
    }
    printf("%d\n",count);
}