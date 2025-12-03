#include <stdio.h>
int main()
{
    char a[1000],i = 0,count = 0,er = 1;
    
    printf("Enter a number: ");
    scanf("%s",a);
    
    while (a[i])
    {
        if (!(a[i] >= 48 && a[i] <= 57))
        {
            er = 0;
        }
        i++;
    }
    
    if (er)
    {
        printf("Correct");
    }
    else
    {
        printf("Not Correct");
    }
}