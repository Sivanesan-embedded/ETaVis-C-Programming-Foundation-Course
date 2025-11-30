#include <stdio.h>
int main()
{
    int i = 1,sum = 0;
loop:if (i <= 5)
    {
        sum += i++;
        goto loop;
    }
    printf("%d\n",sum);
}