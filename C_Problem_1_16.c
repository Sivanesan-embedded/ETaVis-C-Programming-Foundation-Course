#include <stdio.h>
int main()
{
    int x=0,num=0;
    printf("Enter a number: ");
    scanf("%d",&x);
    num = (((x/100)%10)*1000) + ((x / 1000) * 100) + (x % 100);
    printf("The number is : %d\n",num);
    return 0;
}