#include <stdio.h>
#include <string.h>

int main()
{
    char a[1000],i = 0,count = 0,er = 1,c=1;
    
    printf("Enter a number: ");
    scanf("%s",a);
    
    int k = strlen(a)-1;
    
    while (k!=-1)
    {
        printf("%c",a[k]);
        k--;
    }
}