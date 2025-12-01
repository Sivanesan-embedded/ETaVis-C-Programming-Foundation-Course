#include <stdio.h>
int main()
{
    int x,num,count=0;
    
    printf("Enter a number: ");
    scanf("%d",&x);
    
    for (;x!=0;)
    {
        num = x % 10;
        
        for (int i = 1;i<=9;i++)
        {
            if ((i*i) == num)
            {
                count++;
                break;
            }
        }
        x/=10;
    }
    
    printf("%d\n",count);
}