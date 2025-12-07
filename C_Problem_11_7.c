#include <stdio.h>

void memcomp(int*,int*,int);

int main()
{
    int src[5] = {1,2,3,4,5};
    int dst[5] = {1,2,3,4,5};

    memcomp(src,dst,5);
}

void memcomp(int *src,int *dst,int size)
{
    int i = 0,count = 0;
    for (i = 0;i < size;i++)
    {
        if (*(src++) == *(dst++))
        {
            count++;
        }
    }
    
    if (i == count)
    {
        printf("Success");
    }
    else
    {
        printf("Failure");
    }
}