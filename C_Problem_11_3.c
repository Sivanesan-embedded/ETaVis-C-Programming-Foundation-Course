#include <stdio.h>

int arrange_ascend(void);

int main()
{
    for (int i = 0;i < 5;i++)
    {
    printf("%d\n",arrange_ascend());
    }
}

int arrange_ascend(void)
{
    static int x = 0;
    x++;
    return x;
}