#include <stdio.h>
#include <stdlib.h>

typedef struct node *nodeptr;

typedef struct node
{
    int data;
    nodeptr prev;
    nodeptr next;

} Node;

void insert(int x)
{
    if (head == NULL)
    {
        nodeptr P = (nodeptr)malloc(sizeof(Node));
        P->data = x;
    }
    else
    {
        nodeptr temp = (nodeptr)malloc(sizeof(Node));
        temp->data = x;
        head->next->prev = temp;
        head->next = temp;
    }
}

nodeptr delete ()
{

    if (head == NULL)
    {
        printf("The linked list is already empty\n");
    }
    else if ()
        else
        {
            head->prev->next = head->next;
            head->next->prev = head->prev;
        }
}

void display()
{
}

int main()
{

    int x;
    int choice;
    printf("Enter your choice :\n1- for insertion\n2- for deletion\n3-for displaying the content.\n4-for exiting the program.\n");
    scanf("%d", &choice);
    while (choice != 0)
    {
        switch (choice)
        {
        case 1:
            printf("Enter the element to be inserted in the doubly linked list:\n");
            scanf("%d", &x);
            insert(x);
            break;
        case 2:
            delete ();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
        printf("Enter your choice. \n");
        scanf("%d", &choice);
    }
    return 0;
}