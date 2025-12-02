#include <stdio.h>

long int disp_LCM3(int,int,int);

int main()
{
    int x,y,z;
    printf("Enter the value of x: ");
    scanf("%d",&x);
    printf("Enter the value of y: ");
    scanf("%d",&y);
    printf("Enter the value of z: ");
    scanf("%d",&z);
    printf("%ld\n",disp_LCM3(x,y,z));
    return 0;
}

long int disp_LCM3(int x,int y,int z)
{
    long int w = 0,division = 2,multiplication = 1;
    while (1)
    {
        w = 0;
        if (!(x % division) && !(y%division) && !(z%division))
        {
            x /= division;
            y /= division;
            z /= division;
            multiplication *= division;
            w = 1;
        }
        else if (!(x % division) && !(y%division))
        {
            x /= division;
            y /= division;
            multiplication *= division;
            w = 1;
        }
        else if (!(y%division) && !(z%division))
        {
            y /= division;
            z /= division;
            multiplication *= division;
            w = 1;
        }
        else if (!(x % division) && !(z%division))
        {
            x /= division;
            z /= division;
            multiplication *= division;
            w = 1;
        }
        else if (!(x % division))
        {
            x /= division;
            multiplication *= division;
            w  = 1;
        }
        else if(!(y % division))
        {
            y /= division;
            multiplication *= division;
            w = 1;
        }
        else if(!(z % division))
        {
            z /= division;
            multiplication *= division;
            w = 1;
        }
        if (!(w))
        {
            division++;
        }
        if (x == 1 && y == 1 && z == 1)
        {
            break;
        }
    }
    return multiplication;
}