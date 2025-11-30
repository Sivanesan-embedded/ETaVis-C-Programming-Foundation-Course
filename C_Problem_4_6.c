#include <stdio.h>
int main()
{
    int i = 11;
loop:if (i < 20)
    {
        if (i % 2) printf("%d\n",i);
        i++;
        goto loop;
    }
}