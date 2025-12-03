#include <stdio.h>
int main()
{
    int arr[5] = {0},temp = 0,rem = 0,sum=0,l_sum;
    
    for (int i = 0;i < 5;i++)
    {
        printf("Enter a number %d: ",i+1);
        scanf("%d",&arr[i]);
        temp = arr[i];
        sum = 0;
        while (temp)
        {
            rem = temp % 10;
            sum = (sum * 10) + rem;
            temp /= 10;
        }
        arr[i] = sum;
        l_sum += arr[i];
    }
    for (int i = 0; i < 5 ;i++)
    {
    printf("%d\n",arr[i]);
    }
    printf("Total sum: %d\n",l_sum);
}