#include <stdio.h>
int main()
{
    int i=2,prime = 1,j=2,count=0;
    
    while (i < 10)
    {
        prime = 1;
        j = 2;
    while(j < i)
    {
        if (!(i % j))
        {
            prime = 0;
            break;
        }
        j++;
    }
    if (prime)
    {
    count++;
    }
    i++;
    }
    printf("%d\n",count);
}