#include<stdio.h>
#include<process.h>

#define MAXSIZE 10

void push();
int pop();
void traverse();
int stack[MAXSIZE];
int Top=-1;

int main()
{
    int choice;
    char ch;
    do
    {
        printf("\n1. PUSH ");
        printf("\n2. POP ");
        printf("\n3. TRAVERSE ");
        printf("\nEnter your choice ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: push();
                break;
            case 2: printf("\nThe deleted element is %d ",pop());
                break;
            case 3: traverse();
                break;
            default: printf("\nYou Entered Wrong Choice");
        }
        printf("\nDo You Wish To Continue (Y/N)");
        fflush(stdin);
        scanf("%c",&ch);
    }
    while(ch=='Y' || ch=='y');
    return 0;
}

void push()
{
    int item;
    if(Top == MAXSIZE - 1)
    {
        printf("\nThe Stack Is Full");
        exit(0);
    }
    else
    {
        printf("\nEnter the element to be inserted ");
        scanf("%d",&item);
        Top= Top+1;
        stack[Top] = item;
    }
}

int pop()
{
    int item;
    if(Top == -1)
    {
        printf("\nThe stack is Empty");
        exit(0);
    }
    else
    {
        item = stack[Top];
        Top = Top-1;
    }
    return(item);
}

void traverse()
{
    int i;
    if(Top == -1)
    {
        printf("\nThe Stack is Empty");
        exit(0);
    }
    else
    {
        for(i=Top;i>=0;i--)
        {
            printf("\nTraverse the element ");
            printf("%dn",stack[i]);
        }
    }
}
