#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
Node* front=NULL;
Node* rear=NULL;
//Time complexity should be O(1)
void Enqueue(int x)
{
    Node* temp=new Node();
    temp->data=x;
    temp->next=NULL;
    if(front==NULL && rear==NULL)
    {
        front=temp;
        rear=temp;
        return;
    }
    else
    {
        rear->next=temp;
        rear=temp;
    }
}
void Dequeue()
{
    Node* temp=front;
    if(front==NULL)
    {
        std::cout<<"Already empty cannot pop elements from it"<<"\n";
        return;
    }
    else if(front==rear)
    {
        front=NULL;
        rear==NULL;

    }
    else{
        front=front->next;
    }
    delete(temp);
}
int Top(){
    Node* temp=front;
    if(temp->next!=NULL)
    {std::cout<<"Currently the top most element of queue is"<<"\n";
    std::cout<<temp->data<<"\n";}
    else{
        std::cout<<"empty queque "<<"\n";
    }

}
bool isEmpty()
{ Node* temp=front;
    if(temp->next==NULL)
        return true;
    else
        return false;
}
void print( ){
    Node* temp=front;
    std::cout<<"Currently queue is as  follows"<<"\n";
    while(temp!=NULL)
{
    std::cout<<temp->data<<" ";
    temp=temp->next;
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
    Top();
   isempty=isEmpty();
   if(isempty==0)
    std::cout<<"The stack is not empty"<<"\n";
   else
    std::cout<<"The stack is empty"<<"\n";
}





