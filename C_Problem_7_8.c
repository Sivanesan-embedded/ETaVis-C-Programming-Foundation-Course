#include <stdio.h>

void disp_2digit_even_sum6(void);

int main()
{
    disp_2digit_even_sum6();
}

void disp_2digit_even_sum6(void)
{
    int sum = 0;
    for (int i = 1;i < 100;i++)
    {
        if (!(i%2) && (i/10!=0))
        {
            if (((i % 10) + (i / 10)) == 6)
            {
                printf("%d\n",i);
            }
        }
    }
}