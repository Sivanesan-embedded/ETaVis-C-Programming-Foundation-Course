#include <stdio.h>

void strcopy(char*,char*);

int main()
{
    char src[] = "HI",count=0,i=0;
    
    while (src[i])
    {
        count++;
        i++;
    }
    char dst[count];
    
    strcopy(src,dst);
    
    printf("Copied String: %s\n",dst);
}

void strcopy(char *src,char *dst)
{
    while (*src)
    {
        *(dst++) = *(src++);
    }
}