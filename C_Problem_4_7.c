#include <stdio.h>
int main()
{
    int x = 11;
loop: if (x++ < 100)
    {
        if (x % 2)
        {
            if ((x / 10 + x % 10) == 7)
            {
                printf("%d\n",x);
            }
        }
        goto loop;
    }
}