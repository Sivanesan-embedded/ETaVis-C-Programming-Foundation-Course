#include <stdio.h>
#include <stdlib.h>

void strcomp(char[],char[]);

int main()
{
    char src[50],dst[50];
    
    printf("Enter the src string: ");
    scanf("%s",src);
    
    printf("Enter the dst string: ");
    scanf("%s",dst);
    
    strcomp(src,dst);
}

void strcomp(char src[],char dst[])
{
    int i = 0;
    while (dst[i])
    {
        if (src[i] != dst[i])
        {
            printf("failure");
            exit(0);
        }
        i++;
    }
    if (src[i] == 0 && dst[i] == 0)
    {
        printf("Success");
    }
    else
    {
        printf("Failure");
    }
}