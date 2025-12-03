#include <stdio.h>
int main()
{
    int arr[5],sum = 0,max = 0,temp;
    
    for (int i = 0;i < 5;i++)
    {
        printf("Enter no %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    
    for (int i = 0; i < 4;i++)
    {
        for (int j = i+1;j < 5;j++)
        {
            if (arr[i]  < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    for (int i = 0; i < 5;i++)
    {
        printf("%d\n",arr[i]);
    }
}