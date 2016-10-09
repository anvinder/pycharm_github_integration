#include<iostream>
using namespace std;

class queue
{
  public:
  int q[5],front,rear,x,result;
  void enq();
  void dque();
  void disp();
  queue()
  {
    front=0;
    rear=0;
  }
};
void queue::enq()
{
  if(rear>=5)
  cout<<"\nQueue overflow!!\n";
  else
  {
    cout<<"\nEnter the number to be inserted: ";
    cin>>x;
    rear++;
    q[rear]=x;
    cout<<"\nNumber pushed in the queue:"<<q[rear];
  }
}

void queue::disp()
{
  if(rear==0)
    cout<<"\nQueue underflow!!\n";
  else
    cout<<"\nContents of queue is:";
  for(int i=front+1;i<=rear;i++)
    cout<<q[i]<<"\t";
}
int main()
{
  int c;
  queue qu;
//  cout<<"\n*****";
//  cout<<"\nQUEUE";
//  cout<<"\n*****";
  do
  {
    cout<<"\n1.Insertion\n2.Display\n";
    cout<<"\nEnter your choice:";
    cin>>c;
    switch(c)
    {
      case 1:
    qu.enq();
    break;
      case 2:
    qu.disp();
    break;
      default:
    cout<<"\nInvalid choice!!\n";
    }
  }
  while(c<4);
  return 0;
}
