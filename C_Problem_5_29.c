#include <stdio.h>
int main()
{
    unsigned long int x,y,z,division=2,e1=0,e2=0,e3=0,mul=1;
    
    printf("Enter the value of x: ");
    scanf("%lu",&x);
    
    printf("Enter the value of y: ");
    scanf("%lu",&y);
    
    printf("Enter the value of z: ");
    scanf("%lu",&z);
    
    for (;;)
    {
        e1 = 0;
        e2 = 0;
        e3 = 0;
        if (!(x % division) && !(y % division) && !(z % division))
        {
            mul *= division;
            x /= division;
            y /= division;
            z /= division;
            e1 = 1;
            e2 = 1;
            e3 = 1;
            goto down;
        }
        
        else if (!(x % division) && !(z % division))
        {
            x /= division;
            z /= division;
            e1 = 1;
            e3 = 1;
            mul *= division;
        }
        else if (!(y % division) && !(x % division))
        {
            e1 = 1;
            e2 = 1;
            x /= division;
            y /= division;
            mul *= division;
        }
        else if (!(y % division) && !(z % division))
        {
            e2 = 1;
            e3 = 1;
            y /= division;
            z /= division;
            mul *= division;
        }
        else if (!(x % division))
        {
            x /= division;
            e1 = 1;
            mul *= division;
        }
        else if (!(y % division))
        {
            y /= division;
            e2 = 1;
            mul *= division;
        }
        else if (!(z % division))
        {
            z /= division;
            e3 = 1;
            mul *= division;
        }
down:   if ((!e1) && (!e2) && (!e3))
        {
            division++;
        }
        if (x == 1 && y == 1 && z == 1)
        {
            break;
        }
    }
    printf("LCM: %lu\n",mul);
}