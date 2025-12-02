#include <stdio.h>

int disp_biggest_4digit_div7_9(void);

int main()
{
    printf("%d\n",disp_biggest_4digit_div7_9());
    return 0;
}

int disp_biggest_4digit_div7_9(void)
{
    for (int i = 9999;i>=0;i--)
    {
        if (!(i%7) && !(i%9))
        {
            return i;
        }
    }
}