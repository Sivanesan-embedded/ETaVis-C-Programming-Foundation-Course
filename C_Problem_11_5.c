#include <stdio.h>

void memcopy(int*,int*,int);

int main()
{
    int arr1[5] = {0},arr2[5] = {0};
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&arr1[i]);
        printf("%d\n",arr1[i]);
    }
    memcopy(arr1,arr2,5);
    printf("\n\nUpdated copy: \n\n");
    for (int i = 0;i < 5;i++)
    {
        printf("%d\n",arr2[i]);
    }
}

void memcopy(int* src,int* dst,int size)
{
    
    for (int i = 0; i < size;i++)
    {
        *(dst++) = *(src++);
    }
}