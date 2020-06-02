#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
Node*insert(Node* head,int x)
{ Node* temp=new Node();
  temp->data=x;
  temp->next=NULL;
  if(head==NULL){
    head=temp;
  }
  else{
    Node* temp1=head;
while(temp1->next!=NULL)     {temp1=temp1->next;}

    temp1->next=temp;
  }
  return head;

}

void print(Node* head){
    if(head==NULL) return;

    std::cout<<head->data;
    print(head->next);
}
void reverseprint(Node* head){
     if(head==NULL) return;

      reverseprint(head->next);
    std::cout<<head->data;

}
int main()
{
    Node* head=NULL;
    head=insert(head,2);
    head=insert(head,3);
    head=insert(head,4);
    head=insert(head,5);
    print(head);
    std::cout<<"\n";
    reverseprint(head);

}



