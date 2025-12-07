#include <stdio.h>
#include <stdlib.h>

struct student {
    int id;
    int maths;
    int science;
    struct student *next;
};

void create_node(int);
void print_nodes();

struct student *current,*head,*temp;

int main()
{
    int id = 1;
    head = (struct student*)malloc(sizeof(struct student));
    printf("Enter the id: ");
    scanf("%d",&(head->id));
    if (head->id != -1)
    {
        printf("Enter the maths marks: ");
        scanf("%d",&(head->maths));
        printf("Enter the science marks: ");
        scanf("%d",&(head->science));
        head->next = NULL;
        temp = head;
    }
    printf("Enter the id: ");
    scanf("%d",&id);
    while (id != -1)
    {
        create_node(id);
        printf("Enter the id: ");
        scanf("%d",&id);
    }
    print_nodes();
}

void create_node(int id)
{
    current = (struct student*)malloc(sizeof(struct student));
    current->id = id;
    printf("Enter the maths marks: ");
    scanf("%d",&(current->maths));
    printf("Enter the science marks: ");
    scanf("%d",&(current->science));
   temp->next = current;
   current->next = NULL;
   temp = current;
}

void print_nodes()
{
    temp = head;
    while (temp)
    {
        printf("\n%d %d %d\n\n",temp->id,temp->maths,temp->science);
        temp = temp->next;
    }
}