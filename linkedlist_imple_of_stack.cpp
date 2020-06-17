#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
Node* top=NULL;
void Push(int x){
    Node* temp=new Node();
    temp->data=x;
    temp->next=top;
    top=temp;
}
void Pop(){
    Node* temp;
    temp=top;
    top=top->next;
    delete(temp);
}
int Top(){
    Node* temp=top;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    std::cout<<"Currently the top most element of stack is"<<"\n";
    std::cout<<temp->data<<"\n";

}
bool isEmpty()
{ Node* temp=top;
    if(temp->next==NULL)
        return true;
    else
        return false;
}
void print( ){
    Node* temp=top;
    std::cout<<"Currently stack is as  follows"<<"\n";
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
    Push(2);
    print();
    Push(5);
    print();
    Push(10);
    print();
    Pop();
    print();
    Top();
   isempty=isEmpty();
   if(isempty==0)
    std::cout<<"The stack is not empty"<<"\n";
   else
    std::cout<<"The stack is empty"<<"\n";
}
