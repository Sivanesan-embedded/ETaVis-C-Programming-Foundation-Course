#include <stdio.h>
int main()
{
    int num=0,check = 0;
    printf("Enter a number: ");
    scanf("%d",&num);
    check = (num % 100) == (num / 100);
    if (check) printf("Success");
    else printf("Failure");
}