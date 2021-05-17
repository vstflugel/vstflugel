#include <stdio.h>
#include <stdlib.h>

#define N 1000

// Assuming that all the element of the linked list are entered to be positive only.
int head = 0;
int key[N] = {-1}, next[N] = {-1}, prev[N] = {-1};

void insert(int x)
{
    if(key[head]==-1)
    {
        key[head]= x;
    }
    else 
    {
        next[head]= head+1;
        prev[head]= head;
        head = next[head];
        key[head]=x;
    }
}

void delete()
{
    if(head == -1)
    {
        printf("The linked list is empty and no element can be extracted out of it\n");
    }
    else 
    {
        printf("The deleted element is %d \n ",key[head]);
        head = prev[head];
    }

}

void display()
{
    int temp = head;
    while(temp!= -1)
    {
        printf("%d <-- ",key[temp]);
        temp = prev[temp];
    }
}

int main()
{
    int choice;
    int x;
    printf("Enter you choice : \n1- for insert\n2- for removing element from the front\n3- for displaying the whole content of the linked list.\n4- for exiting throught the function\n");
    scanf("%d", &choice);
    while (choice != 0)
    {
        switch (choice)
        {
        case 1:
            printf("Enter the element to be inserted in the linked list\n");
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
        printf("Enter your choice :\n");
        scanf("%d",&choice);
    }
    return 0;
}