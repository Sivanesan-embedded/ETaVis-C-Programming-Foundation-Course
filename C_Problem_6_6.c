#include <stdio.h>
int main()
{
    int x = 9;
    
    while (x++ != 20)
    {
        if (x % 2)
        {
            printf("%d\n",x);
        }
    }
}