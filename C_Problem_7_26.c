#include <stdio.h>
void disp_biggest_4digit_div7_9(void);
int main()
{
    disp_biggest_4digit_div7_9();
}

void disp_biggest_4digit_div7_9(void)
{
    for (int i = 9999;i>=0;i--)
    {
        if (!(i % 7) && !(i % 9))
        {
            printf("%d\n",i);
            break;
        }
    }
}