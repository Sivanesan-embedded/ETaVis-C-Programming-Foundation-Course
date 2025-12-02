#include <stdio.h>
void disp_LCM3(void);
int main()
{
    disp_LCM3();
}

void disp_LCM3(void)
{
    int x,y,w1=0,division=2,multiplication=1,z;
    
    printf("Enter the value of x: ");
    scanf("%d",&x);
    
    printf("Enter the value of y: ");
    scanf("%d",&y);
    
    printf("Enter the value of z: ");
    scanf("%d",&z);
    
    while (1)
    {
        w1 = 0;
        if (!(x % division) && !(y % division) && !(z % division))
        {
            x /= division;
            y /= division;
            z /= division;
            multiplication *= division;
            w1 = 1;
        }
        if (!(x % division) && !(y % division))
        {
            x /= division;
            y /= division;
            multiplication *= division;
            w1 = 1;
        }
        if (!(y % division) && !(z % division))
        {
            y /= division;
            z /= division;
            multiplication *= division;
            w1 = 1;
        }
        if (!(x % division) && !(z % division))
        {
            x /= division;
            z /= division;
            multiplication *= division;
            w1 = 1;
        }
        if (!(x % division))
        {
            x /= division;
            multiplication *= division;
            w1 = 1;
        }
        if (!(y % division))
        {
            y /= division;
            multiplication *= division;
            w1 = 1;
        }
        if (!(z % division))
        {
            z /= division;
            multiplication *= division;
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