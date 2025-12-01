#include <stdio.h>
int main()
{
    int x,num,count=-1,temp,l_count = 0;
    
    printf("Enter a number: ");
    scanf("%d",&x);
    temp = x;
    
    for (;x!=0;)
    {
        count++;
        x/=10;
    }
    
    for (int i = 0;i < count;i++)
    {
        num = temp % 100;
        for (int i = 1;i<=9;i++)
        {
            if (num == (i*i))
            {
                l_count++;
                break;
            }
        }
        temp /= 10;
    }
    printf("%d\n",l_count);
}