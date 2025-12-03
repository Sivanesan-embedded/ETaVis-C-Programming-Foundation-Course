#include <stdio.h>
int main()
{
    int x = 0,sum = 0,rem = 0;
    
    printf("Enter a number: ");
    scanf("%d",&x);
    
    while (x)
    {
        rem = x % 10;
        sum = (sum * 10) + rem;
        x/=10;
    }
    
    while (sum)
    {
        printf("%c\n",(sum%10)+48);
        sum /= 10;
    }
}