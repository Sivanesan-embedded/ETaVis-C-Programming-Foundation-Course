#include <stdio.h>
int main()
{
    int arr[5],sum = 0,max = 0;
    
    for (int i = 0;i < 5;i++)
    {
        printf("Enter no %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    
    max = arr[0];
    
    for (int i = 1;i < 5;i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("%d\n",max);
}