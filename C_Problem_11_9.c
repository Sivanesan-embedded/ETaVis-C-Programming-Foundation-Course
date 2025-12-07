#include <stdio.h>

void intcon(int[],int,int[],int,int[]);

int main()
{
    int size1,size2;
    
    printf("Enter the size of the src1 array: ");
    scanf("%d",&size1);
    printf("Enter the size of the src2 array: ");
    scanf("%d",&size2);
     int src1[size1],src2[size2],dst[size1+size2];
    printf("Enter elements the src1 array: ");
    
    for (int i = 0;i < size1;i++)
    {
        scanf("%d",&src1[i]);
    }
    
    printf("Enter elements the src2 array: ");
    
    for (int i = 0;i < size2;i++)
    {
        scanf("%d",&src2[i]);
    }
    
    intcon(src1,size1,src2,size2,dst);
}

void intcon(int src1[],int size1,int src2[],int size2,int dst[])
{
    int k = 0;
    
    for (int i = 0;i < size1;i++)
    {
        dst[k++] = src1[i];
    }
    for (int i = 0; i < size2;i++)
    {
        dst[k++] = src2[i];
    }
    printf("\nThe elements the src1 array: ");
    
    for (int i = 0;i < size1;i++)
    {
        printf("%d ",src1[i]);
    }
    
    printf("\nThe elements the src2 array: ");
    
    for (int i = 0;i < size2;i++)
    {
        printf("%d ",src2[i]);
    }
    
    printf("\n\nThe combined elements are: ");
    
    for (int i = 0;i<size1+size2;i++)
    {
        printf("%d ",dst[i]);
    }
}