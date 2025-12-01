#include <stdio.h>
int main()
{
    int x = 0,rem=0,count=-1,temp = 0,l_count=0;
    printf("Enter a number: ");
    scanf("%d",&x);
    temp = x;
    for (;x!=0;)
    {
        count++;
        x/=10;
    }
    for (int i = 0;i < count;i++)
    {
        if((temp%100)%2)
        {
            l_count++;
        }
        temp/=10;
    }
    printf("%d\n",l_count);
}