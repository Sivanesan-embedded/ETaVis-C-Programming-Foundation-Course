#include <stdio.h>
int main()
{
    int x,temp,count = -1,k=0,l_count = 0;
    
    printf("Enter the number: ");
    scanf("%d",&x);
    temp = x;
    
    while (temp)
    {
        count++;
        temp /= 10;
    }
    
    while (k < count)
    {
        if ((x%100)%2)
        {
            l_count++;
        }
        k++;
        x/=10;
    }
    
    printf("%d\n",l_count);
}