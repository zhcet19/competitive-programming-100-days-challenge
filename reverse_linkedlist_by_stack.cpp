#include<iostream>
#include<stack>
using namespace std;
struct Node{
    int data;
    Node* next;
};
Node* head;
void insert(int data,int pos)
{ Node* temp1=new Node();
  temp1->data=data;
  temp1->next=NULL;
  if(pos==1)
  {
      temp1->next=head;
      head=temp1;
      return;
  }
  Node* temp2=head;
  for(int i=0;i<pos-2;i++)
  {
      temp2=temp2->next;
  }
  temp1->next=temp2->next;
  temp2->next=temp1;

}
void rev(){
    Node* temp=head;
    if(head==NULL) return ;
    stack <Node*> S;
    while(temp!=NULL)
    {
        S.push(temp);
        temp=temp->next;
    }
     temp=S.top();
     head=temp;
     S.pop();
     while(!S.empty())
     {
         temp->next=S.top();
         S.pop();
         temp=temp->next;
     }
     temp->next=NULL;
}
void print(){
    Node* temp=head;
    std::cout<<"list is:";
    while(temp!=NULL)
    {
        std::cout<<temp->data<<" ";
        temp=temp->next;
    }
    std::cout<<"\n";
}
int main()
{
    head=NULL;
    int n;
    int data,pos;
    std::cout<<"How many no you want to insert in this linked list\n";
    std::cin>>n;
    for(int i=0;i<n;i++)
    {
        std::cout<<"Enter the no to insert\n";
        std::cin>>data;
        std::cout<<"Enter the position to insert\n";
        std::cin>>pos;
        insert(data,pos);
        print();
    }
    std::cout<<"The linked list in reverse order is:-\n";
    rev();
    print();
    }
