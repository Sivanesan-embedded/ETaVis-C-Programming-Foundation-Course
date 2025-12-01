#include <stdio.h>
int main()
{
    int x = 0;
    
    while (x++ != 10)
    {
        if (x % 2)
        {
            printf("%d\n",x);
        }
    }
}