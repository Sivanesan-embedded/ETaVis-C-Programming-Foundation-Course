#include <stdio.h>
int main()
{
    int x = 9,sum = 0;
loop: if (++x < 100)
    {
        if ((x % 2))
        {
            if ((x / 10) == 7)
            {
                sum += x;
            }
        }
        goto loop;
    }
    printf("%d\n",sum);
}