#include <stdio.h>
int main()
{
    int x = 0,once=0,hun=0;
    printf("Enter a number: ");
    scanf("%d",&x);
    once = (x%10)%2;
    hun = (x/100)%2;
    printf("The number is : %d\n",x-(once*hun*5));
    return 0;
}