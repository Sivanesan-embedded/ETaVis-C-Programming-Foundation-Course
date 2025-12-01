#include <stdio.h>
int main()
{
    int x = 1,sum=0;
    
    while (x++ != 100)
    {
        if (x % 10 == 5 && (x/10)!=0)
        {
            sum += x;
        }
    }
    printf("%d\n",sum);
}