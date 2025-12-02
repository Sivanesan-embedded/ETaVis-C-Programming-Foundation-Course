#include <stdio.h>
int main()
{
    int x,y,z,division = 2,multiplication=1,w1=0,w2=0;
    
    printf("Enter the value of x: ");
    scanf("%d",&x);
    
    printf("Enter the value of y: ");
    scanf("%d",&y);
    
    printf("Enter the value of z: ");
    scanf("%d",&z);
    
    while (1)
    {
        w1 = 0;
        if (!(x % division) && !(y%division) && !(z%division))
        {
            multiplication *= division;
            x /= division;
            y/= division;
            z/=division;
            w1 = 1;
        }
        if (!(x % division) && !(y % division))
        {
            multiplication *= division;
            x/=division;
            y/=division;
            w1 = 1;
        }
        if (!(y % division) && !(z % division))
        {
            multiplication *= division;
            y /= division;
            z /= division;
            w1 = 1;
        }
        if (!(x%division) && !(z % division))
        {
            multiplication *= division;
            y /= division;
            z/=division;
            w1 = 1;
        }
        if (!(x%division))
        {
            multiplication *= division;
            x /= division;
            w1 = 1;
        }
        if (!(y%division))
        {
            multiplication *= division;
            y /= division;
            w1 = 1;
        }
        if (!(z % division))
        {
            multiplication *= division;
            z /= division;
            w1 = 1;
        }
        if (!(w1))
        {
            division++;
        }
        if (x == 1 && y == 1 && z == 1)
        {
            break;
        }
    }
    printf("%d\n",multiplication);
}