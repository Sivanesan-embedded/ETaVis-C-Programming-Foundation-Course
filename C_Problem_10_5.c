#include <stdio.h>
int main()
{
    char a[1000],i=0,temp,rem;
    int sum = 0;
    int x = 0;
    
    printf("Enter an integer: ");
    scanf("%d",&x);
    temp = x;
    while (x)
    {
        rem = x % 10;
        sum = (sum * 10) + rem;
        x/=10;
    }
    
    while (sum)
    {
        a[i++] = (sum % 10) + 48;
        sum /= 10;
    }
    
    a[i] = 0;
    
    printf("%s\n",a);
}