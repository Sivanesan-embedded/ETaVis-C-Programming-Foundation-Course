#include <stdio.h>
int main()
{
    int i = 1;
loop:if (i <= 5)
    {
        printf("%d\n",i++);
        goto loop;
    }
}