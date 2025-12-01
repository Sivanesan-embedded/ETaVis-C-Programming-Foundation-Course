#include <stdio.h>
int main()
{
    int x = 6,sum = 0;
    
    while (x != 0)
    {
        sum += x--;
    }
    printf("Sum: %d\n",sum);
}