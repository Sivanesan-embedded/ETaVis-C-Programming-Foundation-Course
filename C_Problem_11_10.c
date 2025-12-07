#include <stdio.h>

int find_length(char[],char[]);
void strcon(char[],char[],char[]);

int main()
{
    char src1[] = "siva";
    char src2[] = "nesan";
    
    char dst[find_length(src1,src2)];
    
    strcon(src1,src2,dst);
}

int find_length(char a[],char b[])
{
    int i = 0,count = 0;
    while (a[i])
    {
        count++;
        i++;
    }
    i = 0;
    while (b[i])
    {
        count++;
        i++;
    }
    return count;
}

void strcon(char src1[],char src2[],char dst[])
{
    int i = 0,k = 0;
    while (src1[i])
    {
        dst[k++] = src1[i];
        i++;
    }
    i = 0;
    while (src2[i])
    {
        dst[k++] = src2[i];
        i++;
    }
    dst[k] = 0;
    printf("src1: %s\n",src1);
    printf("src2: %s\n",src2);
    printf("dst: %s\n",dst);
}