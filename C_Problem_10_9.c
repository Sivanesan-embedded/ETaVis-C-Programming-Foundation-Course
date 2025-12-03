#include <stdio.h>
int main()
{
    char a[1000],i = 0,count = 0,er = 1,c=1;
    
    printf("Enter a number: ");
    scanf("%s",a);
    
    while (a[i])
    {
        if ((a[i] - 48 == 0) && c)
        {
            i++;
            continue;
        }
        else
        {
            c = 0;
        }
        printf("%c",a[i]);
        i++;
    }
}