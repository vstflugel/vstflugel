#include <stdio.h>
#include<stdbool.h>
#include <stdlib.h>

#define N 1000

int top = -1;
int stack[N] = {0};

bool IsEmpty()
{
    if (top == -1)
        return true;
    else
        return false;
}

void Push(int x)
{
    if (top == N-1)
    printf("Stack overflow\n");
        top++;
    stack[top] = x;
}

int pop()
{
    if (IsEmpty())
    {
        printf("Stack underflow\n");
        return 0;
    }
    else
    {
        top--;
        return stack[top + 1];
    }
}

int main()
{
    int x;
    int choice = 1;
    printf("To enter the element in the stack press 1\n To pop the element press 2\n and to check the status of the stack press 3\n\n");
    while (choice != 0)
    {
        if(choice==1)
        {
            printf("Enter the element to  be entered in the stack \n");
            scanf("%d",&x);
            Push(x);
            choice =0;
        }
        else if( choice ==2)
        {
            printf("the element to  be removed from  the stack \n");
            int a = pop();
            printf("%d\n",a);
            choice =0;
        }
        else if(choice ==3)
        {
            if(IsEmpty())
            {
                printf("Yes the stack is empty\n");
            }
        }

        printf("Enter the value of the choice to be checked \n");
        scanf("%d",&choice);
    }
    return 0;
}