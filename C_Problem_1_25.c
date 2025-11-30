#include <stdio.h>
int main()
{
    int x = 0,num=0;
    printf("Enter a number: ");
    scanf("%d",&x);
    num = (x % 10) + (x / 100) + ((x / 10) % 10); 
    num = (num % 10) + (num / 100) + ((num / 10) % 10); 
    num = (num % 10) + (num / 100) + ((num / 10) % 10); 
    printf("The number is : %d\n",num);
    return 0;
}