#include <stdio.h>
int main()
{
    char a[1000],i = 0,count = 0;
    
    printf("Enter a number: ");
    scanf("%s",a);
    
    while (a[i])
    {
        count++;
        i++;
    }
    
    printf("%d\n",count);
}