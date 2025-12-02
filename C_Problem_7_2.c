#include <stdio.h>

void disp_descend(void);

int main()
{
    disp_descend();
}

void disp_descend(void)
{
    for (int i = 5;i>=1;i--)
    {
        printf("%d\n",i);
    }
}