#include <stdio.h>

void find_2digit_odd_sum7(int*);

int main()
{
    int arr[100] = {0};
    find_2digit_odd_sum7(arr);
    for (int i = 0;arr[i]!=0;i++)
    {
        printf("%d\n",arr[i]);
    }
}

void find_2digit_odd_sum7(int *p)
{
    for (int i = 1; i < 100;i++)
    {
        if (i%2)
        {
        if (((i % 10) + (i / 10)) == 7 && (i/10))
        {
            *(p++) = i;
        }
        }
    }
}