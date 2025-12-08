#include <stdio.h>

void place_queens();
int check_place(char,char);
void print_queens();

int chess[8][8];


int main()
{
    int column_no = 0,row,no = 0;
    
    place_queens();
    
    print_queens();
}

void place_queens()
{
    static int count = 1;
    int c = 0;
    char row,column,cpy_clmn;
    
wh:  while (1)
    {
        c = 0;
        printf("Enter the number of the row: ");
        scanf(" %c",&row);
        printf("Enter the character of the column: ");
        scanf(" %c",&column);
        printf("\n");
        cpy_clmn = column;
        
        if (column <= 72 && column >= 65)
        {
            column -= 'A';
            c = 1;
        }
       // printf("%c %d",column,column);
        if (column <= 104 && column >= 97)
        {
            column -= 'a';
            c = 1;
        }
        
        if (!((row <= 56) && (row >= 49)))
        {
            printf("Entered row value is not correct enter inbetween 1-8\n\n");
            goto wh;
        }
        
        if (!(c))
        {
            printf("Entered charcater id not correct enter inbetween a-h\n\n");
            goto wh;
        }
        
        if (check_place((row-49),column))
        {
            chess[row-49][column] = count;
            printf("Queen %d placed at %d %c Successfully\n\n",count,row-48,cpy_clmn);
            count++;
            print_queens();
        }
        else
        {
            printf("Already queen %d exist try different location!!!\n\n",chess[row-49][column]);
            print_queens();
        }
        
        if (count == 9)
        {
            printf("8 queens were placed successfully !!!\n\n");
            break;
        }
    }
}

int check_place(char row,char column)
{
    if (!(chess[row][column])) return 1;
    return 0;
}

void print_queens()
{
    printf("   A  B  C  D  E  F  G  H\n");
    for (int i = 0; i < 8;i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (j == 0)
            {
                printf("%d  ",i+1);
            }
            if (chess[i][j])
            {
                printf("q%d ",chess[i][j]);
            }
            else
            {
                printf(".. ");
            }
        }
        printf("\n");
    }
    printf("\n");
}