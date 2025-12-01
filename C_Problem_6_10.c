#include <stdio.h>
int main()
{
    int x = 1,sum=0;
    
    while (x++ != 100)
    {
        if (x % 2)
        {
        if (x / 10 == 7)
        {
            sum += x;
        }
        }
    }
    printf("%d\n",sum);
}