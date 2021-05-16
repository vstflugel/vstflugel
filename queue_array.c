#include <stdio.h>
#include <stdlib.h>
#define N 5

int queue[N];

int rear = -1, front = -1;

void enqueue(int x)
{
    if (rear == N - 1)
    {
        printf("Queue is full i.e. overflow\n");
    }
    else if (rear == -1 && front == -1)
    {
        rear = front = 0;
        queue[rear] = x;
    }
    else
    {
        rear++;
        queue[rear] = x;
    }
}

void dequeue()
{
    if (front == -1 && rear == -1)
    {
        printf("Queue is empty\n");
    }
    else if (front == rear)
    {
        printf("The dequeued element is %d \n", queue[front]);
        front = rear = -1;
    }
    else
    {
        printf("The dequeued element is %d \n", queue[front]);
        front = front + 1;
    }
}
void peek()
{
    if (front == -1 && rear == -1)

    {
        printf("The queue is empty that is underflow \n");
    }

    else
    {
        printf("the element in the front of the queue is %d \n", queue[front]);
    }
}

void display()
{
    int i = front;
    if (front == -1 && rear == -1)
    {
        printf("The queue is empty that is underflow\n");
        return;
    }
    while (i <= rear)
    {
        printf("%d ", queue[i]);
        i++;
    }
    printf("\n");
}

int main()
{
    int x;
    int choice = 0;
    printf("Enter your choice : \n1- for enqueue \n2- for dequeue\n3- for peeking \n4- for displlaying the content in the queue\n5-for exiting through the function\n");
    scanf("%d", &choice);
    while (choice != 0)
    {
        switch (choice)
        {
        case 1:
            printf("Enter the element to be inserted \n");
            scanf("%d", &x);
            enqueue(x);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
            case 5:
            exit(0);

        }
        printf("Enter your choice \n");
        scanf("%d", &choice);
    }
    return 0 ;
}