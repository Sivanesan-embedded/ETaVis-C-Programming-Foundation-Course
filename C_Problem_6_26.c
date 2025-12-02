#include <stdio.h>
int main()
{
    for (int i = 9999;i >= 0;i--)
    {
        if ((i % 7 == 0) && (i % 9 == 0))
        {
            printf("%d\n",i);
            break;
        }
    }
}