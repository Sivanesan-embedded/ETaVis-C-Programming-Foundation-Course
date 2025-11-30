#include <stdio.h>
int main()
{
    int num=0,check = 0;
    printf("Enter a number: ");
    scanf("%d",&num);
    check = (num % 10) == ((num/10)%10);
    if (check) printf("Success");
    else printf("Failure");
}