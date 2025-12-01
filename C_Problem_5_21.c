#include <stdio.h>
int main()
{
    int x,count = 0;
    
    printf("Enter a number: ");
    scanf("%d",&x);
    
    for (;x!=0;)
    {
        if ((x % 10)%2)
        {
            count++;
        }
        x /= 10;
    }
    printf("Count: %d\n",count);
}