#include <stdio.h>
int main()
{
    int x,count = -1,temp,i=1,l_count = 0,j = 0;
    
    printf("Enter a number: ");
    scanf("%d",&x);
    temp = x;
    
    while (temp)
    {
        count++;
        temp /= 10;
    }
    while (j < count)
    {
        i = 1;
        while (i < 10)
        {
            if ((i*i) == (x % 100))
            {
                l_count++;
                break;
            }
            i++;
        }
        x/=10;
        j++;
    }
    printf("%d\n",l_count);
}