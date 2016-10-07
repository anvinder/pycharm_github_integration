#include<iostream>
#include <stdlib.h>
using namespace std;


//   Creating a NODE Structure
struct node
{
    int data;
    struct node *next;
    //struct node *ptr;
};
// Creating a class STACK
class stack
{ public:
    struct node *top;
        stack() // constructor
  {
        top=NULL;
   }
    void push(); // to insert an element
    void pop();  // to delete an element
    void show(); // to show the stack
};
// PUSH Operation
void stack::push()
{
    int value;
	struct node *ptr;
    cout<<"nPUSH Operation";
    cout<<"Enter a number to insert: ";
    cin>>value;
    ptr=new node;
    ptr->data=value;
    ptr->next=NULL;
    if(top!=NULL)
        ptr->next=top;
    top=ptr;
    cout<<"nNew item is inserted to the stack ";

}

// POP Operation
void stack::pop()
{
    struct node *temp;
    if(top==NULL)
    {
        cout<<"nThe stack is empty!!!";
    }
    temp=top;
    top=top-1;// can be replaced by top= top->next
    cout<<"nPOP Operation........nPoped value is "<<temp->data;
    delete temp;
}

// Show stack
void stack::show()
{
    struct node *ptr1=top;
    cout<<"nThe stack isn";
    while(ptr1!=NULL)
    {
        cout<<ptr1->data<<" ->";
        ptr1=ptr1->next;
    }
    cout<<"NULLn";
}

// Main function
int main()
{
    stack s;
    int choice;
    while(1)
    {
        cout<<"n------------------------------------------------\n";
        cout<<"nttSTACK USING LINKED LIST\n";
        cout<<"1:PUSH\n2:POP\n3:DISPLAY STACK\n4:EXIT\n";
        cout<<"nEnter your choice(1-4): ";
        cin>>choice;
        switch(choice)
        {
            case 1:
                s.push();
                break;
            case 2:
                s.pop();
                break;
            case 3:
                s.show();
                break;
            case 4:
                return 0;
                break;
            default:
                cout<<"\nPlease enter correct choice(1-4)!!";
                break;
        }
    }
    return 0;
}
