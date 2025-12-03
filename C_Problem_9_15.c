#include <stdio.h>
int main()
{
    int arr[10000] = {0},newarr[10000] = {0},stop = 1,count = 0,i=0,sum=0,k = 0,temp = 0,min = 0;
    
    while(stop)
    {
        printf("Enter a number %d: ",i+1);
        scanf("%d",&arr[i]);
        temp = arr[i];
        sum = 0;
        while (temp)
        {
            sum += (temp % 10);
            temp /= 10;
        }
        newarr[k++] = sum;
        stop = arr[i];
        i++;
    }
    i -= 1;
    for (int i = 0;i < k-1;i++)
    {
        printf("%d\n",newarr[i]);
    }
    for (int i = 0;i < k-2;i++)
    {
        for (int j = i+1;j<k-1;j++)
        {
            if (newarr[i] > newarr[j])
            {
                temp = newarr[i];
                newarr[i] = newarr[j];
                newarr[j] = temp;
            }
        }
    }
    printf("\n\n");
    for (int i = 0;i < k-1;i++)
    {
        printf("%d\n",newarr[i]);
    }
}