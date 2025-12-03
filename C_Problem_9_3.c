#include <stdio.h>
int main()
{
    int arr[5],sum = 0,min = 0;
    
    for (int i = 0;i < 5;i++)
    {
        printf("Enter no %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    
    min = arr[0];
    
    for (int i = 1;i < 5;i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("%d\n",min);
}