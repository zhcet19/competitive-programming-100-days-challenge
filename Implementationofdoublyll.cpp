#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* prev;
    Node* next;
};
Node* head;
Node* GetNewNode(int x)
{
    Node* newNode=new Node();
    newNode->data=x;
    newNode->prev=NULL;
    newNode->next=NULL;
    return newNode;
}
void InsertAtHead(int x)
{
      Node* newNode=GetNewNode(x);
      if(head==NULL)
      {

          head=newNode;
          return;
      }
      head->prev=newNode;
      newNode->next=head;
      head=newNode;

}
void InsertAtTail(int x)
{  Node* temp = head;
    Node* newNode = GetNewNode(x);
    if(head==NULL)
    {
        head=newNode;
        return;
    }
    while(temp->next!=NULL)  temp=temp->next;

    temp->next=newNode;
    newNode->prev=temp;
}

void print( ){
    Node* temp=head;
    std::cout<<"Forward printing"<<"\n";
    while(temp!=NULL)
{
    std::cout<<temp->data;
    temp=temp->next;
}
 std::cout<<"\n";
}
void ReversePrint(){
    Node *temp=head;
    std::cout<<"Reverse printing"<<"\n";
    if(head==NULL) return;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    while(temp!=NULL)
    {

        std::cout<<temp->data;
        temp=temp->prev;
    }
    std::cout<<"\n";
}
int main(){
    head = NULL; // empty list. set head as NULL.

	// Calling an Insert and printing list both in forward as well as reverse direction.
	InsertAtTail(2); print(); ReversePrint();
	InsertAtTail(4); print(); ReversePrint();
	InsertAtHead(6); print(); ReversePrint();
	InsertAtTail(8); print(); ReversePrint();


}
