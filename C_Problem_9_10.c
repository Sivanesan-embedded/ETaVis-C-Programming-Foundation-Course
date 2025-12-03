#include <stdio.h>
int main()
{
    int arr[5],new_arr[5],k=0,prime = 1;
    
    for (int i = 0;i < 5;i++)
    {
        printf("Enter no %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    
    for (int i = 0; i < 5;i++)
    {
        prime = 1;
        for (int j = 2;j < arr[i];j++)
        {
            if (!(arr[i] % j))
            {
                prime = 0;
                break;
            }
        }
        if (prime && (arr[i]!=1))
        {
            new_arr[k++] = arr[i];
        }
    }
    
    for (int i = 0; i < k;i++)
    {
        printf("%d\n",new_arr[i]);
    }
}