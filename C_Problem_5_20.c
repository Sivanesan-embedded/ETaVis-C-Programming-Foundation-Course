#include <stdio.h>
int main()
{
    int x,prime = 1,count = 1,fin_count = 0;
    
    for (int i = 2;i<10;i++)
    {
        count = 1;
        for (int j = 2;j < i;j++)
        {
            if (!(i % j))
            {
                count = 0;
                break;
            }
        }
        if (count)
        {
            fin_count++;
        }
    }
    
    printf("%d\n",fin_count);
}