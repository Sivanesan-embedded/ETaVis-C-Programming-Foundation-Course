#include <stdio.h>

int disp_2digit_even_sum6(void);

int main()
{
    printf("%d\n",disp_2digit_even_sum6());
    return 0;
}

int disp_2digit_even_sum6()
{
    int count = 0;
    for (int i = 2;i<10;i++)
    {
        for (int j = 2;j < i;j++)
        {
            if (!(i % j))
            {
                count++;
                break;
            }
        }
    }
    return count;
}

