#include<iostream>
# define MAX_SIZE 101
int A[MAX_SIZE];
int front=-1;
int rear=-1;
using namespace std;
bool isEmpty(){
    if(front== -1 && rear==-1)
        return true;
    else
        return false;
}
//Using concept of circular array so as to reuse the cells of array..
void Enqueue(int x)
{
    if((rear+1)%MAX_SIZE==front)
    {
        std::cout<<"Cannot enter more no"<<"\n";
        return;
    }
    else if (isEmpty())

    {
        front=0;
        rear=0;
        A[rear]=x;
    }
    else
    {

        rear=(rear+1)%MAX_SIZE;
        A[rear]=x;
    }
}
void Dequeue( )
 {
     if (isEmpty())
     {   std::cout<<"Cannot remove element from a vaccant queue"<<"\n";
         return ;
     }
     else if(front==rear)
     {
         front=-1;
         rear=-1;
         std::cout<<"Cannot remove element from a vaccant queue"<<"\n";
     }
     else{
        front=(front+1)%MAX_SIZE;
 }

}
int Front()
{

  if(front == -1)
		{
			std::cout<<"Error: cannot return front from empty queue\n";
			return -1 ;
		}
		return A[front];
}
void print(){
    int i;
    std::cout<<"The queue is currently"<<"\n";
    for(i=0;i<(((rear-front+MAX_SIZE)%MAX_SIZE)+1);i++){
        std::cout<<A[((front+i)%MAX_SIZE)]<<" ";
    }
    std::cout<<"\n";
}
int main(){
    int top;
    bool isempty;
    Enqueue(2);
    print();
    Enqueue(5);
   print();
    Enqueue(10);
   print();
    Dequeue();
    print();
   Enqueue(12);
   print();
  top= Front();
  std::cout<<top<<"\n";
  isempty=isEmpty();
 std::cout<<isempty<<"\n";

}
