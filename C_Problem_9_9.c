#include <stdio.h>
int main()
{
    int arr[5],new_arr[5],k=0;
    
    for (int i = 0;i < 5;i++)
    {
        printf("Enter no %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    
    for (int i = 0; i < 5;i++)
    {
        if ((arr[i]%2))
        {
            new_arr[k++] = arr[i];
        }
    }
    
    for (int i = 0; i < k;i++)
    {
        printf("%d\n",new_arr[i]);
    }
}