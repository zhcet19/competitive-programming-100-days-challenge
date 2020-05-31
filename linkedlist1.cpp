#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
Node* head;
void insert(int x)
{ Node* temp=new Node();
  temp->data=x;
  temp->next=head;
  head=temp;
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
    int n,x;
    std::cout<<"How many no you want to insert in this linked list\n";
    std::cin>>n;
    for(int i=0;i<n;i++)
    {
        std::cout<<"Enter the no\n";
        std::cin>>x;
        insert(x);
        print();
    }
}

