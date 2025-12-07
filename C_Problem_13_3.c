#include <stdio.h>
#include <stdlib.h>

struct student {
    int id;
    int maths;
    int science;
    struct student *link;
};
int choice = 0;
struct student *temp;
struct student* del_node(struct student*,struct student*,int);
void print_details(struct student*);
void create_new_node(struct student*);
struct student* scan_id(struct student*,int);
void add_element_node(int id,int maths,int science)
{
    struct student *current = (struct student*)malloc(sizeof(struct student));
    current->id = id;
    current->maths = maths;
    current->science = science;
    current->link = NULL;
    temp->link = current;
    temp = (struct student*)current;
}
int main()
{
    int exit_loop = 0,id_1 = 0,maths_1 = 0,science_1 = 0,choice = 0,id_entry,del_node_id,del_choice;
    printf("Enter -1 to exit: ");
    scanf("%d",&id_1);
    if (id_1 == -1)
    {
        exit(0);
    }
    struct student *head;
    head = (struct student*)malloc(sizeof(struct student));
    head->id = id_1;
    printf("Enter maths marks: ");
    scanf("%d",&(head->maths));
    printf("Enter science marks: ");
    scanf("%d",&(head->science));
    head->link = NULL;
    temp = head;
    printf("Enter -1 to exit: ");
    scanf("%d",&id_1);
    while (id_1 != -1)
    {
    printf("Enter maths marks: ");
    scanf("%d",&(maths_1));
    printf("Enter science marks: ");
    scanf("%d",&(science_1));
    add_element_node(id_1,maths_1,science_1);
    printf("Enter -1 to exit: ");
    scanf("%d",&id_1);
    }
    printf("\n\n");
    temp = head;
    printf("%p\n\n",temp);
    while (1)
    {
    printf("Enter 1 to Insert : \n");
    printf("Enter 2 to delete a node : \n");
    printf("Enter 3 to display : \n");
    printf("Enter 4 to exit : \n");
    printf("Enter the option : ");
    scanf("%d",&choice);
    switch (choice)
    {
        case 1:
        printf("Enter id to insert after: ");
        scanf("%d",&id_entry);
        temp = scan_id(temp,id_entry);
        if (choice)
        {
            create_new_node(temp);
            printf("New node inserted successfully\n");
            printf("%p\n",temp);
            temp = head;
        }
        else
        {
            printf("Entered id not found\n");
        }
        break;
    case 2:
        printf("Enter the id to get deleted: ");
        scanf("%d",&del_node_id);
        temp = scan_id(temp,del_node_id);
        temp = head;
        if (choice)
        {
            head = del_node(temp,head,del_node_id);
            printf("Element deleted successfully\n");
            temp = head;
        }
        else
        {
            printf("Enter no is not available");
        }
        break;
    case 3:
        print_details(temp);
        temp = head;
        break;
    case 4:
        exit(0);
        break;
    default:
        printf("Entered value is wrong");
    }
    }
}

void print_details(struct student *temp)
{
    char count = 1;
    while (temp)
    {
        printf("Student %d details : \n\n",count++);
        printf("id : %d\nMaths Marks: %d\nScience Marks: %d\n",temp->id,temp->maths,temp->science);
        temp = temp->link;
        printf("\n\n");
    }
}

struct student* scan_id(struct student *temp,int id)
{
    printf("\n\naddress: %p\n",temp);
    while (temp)
    {
        if (temp->id == id)
        {
            choice = 1;
            printf("ID caught\n\n");
            break;
        }
        else
        {
            choice = 0;
        }
        temp = temp->link;
        printf("Scan_id: %p\n",temp);
    }
    printf("Scan id finished\n");
    return temp;
    printf("\n\n");
}

void create_new_node(struct student *temp)
{
    struct student *newnode = (struct student*)malloc(sizeof(struct student));
    printf("Enter id to insert: ");
    scanf("%d",&(newnode->id));
    printf("Enter maths marks: ");
    scanf("%d",&(newnode->maths));
    printf("Enter science marks: ");
    scanf("%d",&(newnode->science));
    newnode->link = temp->link;
    temp->link = newnode;
}

struct student* del_node(struct student *temp,struct student *head,int id)
{
    int count = 0;
    struct student *prevnode;
    while (temp)
    {
        count++;
        if (temp->id == id)
        {
            break;
        }
        temp = temp->link;
    }
    if (count == 1)
    {
        head = head->link;
        free(temp);
        temp = head;
        printf("Count as %d\n",count);
    }
    else
    {
        printf("I am executing\n");
        temp = head;
        prevnode = temp;
        temp = temp->link;
        while (temp)
        {
            if (temp->id == id)
            {
                break;
            }
            prevnode = prevnode->link;
            temp = temp->link;
        }
        prevnode->link = temp->link;
        free(temp);
    }
    return head;
}