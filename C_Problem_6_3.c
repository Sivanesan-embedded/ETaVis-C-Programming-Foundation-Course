#include <stdio.h>
int main()
{
    int x = 1,sum = 0;
    
    while (x != 6)
    {
        sum += x++;
    }
    printf("Sum: %d\n",sum);
}