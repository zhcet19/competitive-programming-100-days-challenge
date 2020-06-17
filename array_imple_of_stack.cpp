#include<iostream>
# define MAX_SIZE 101
int A[MAX_SIZE];
int top=-1;
using namespace std;

void push(int x)
{
    if(top==MAX_SIZE-1)
    {
        std::cout<<"overflow of stack"<<"\n";
    }
    else
    {

        A[++top]=x;
    }

}
void pop(){
    if(top==-1)
    {
        std::cout<<"Already empty stack"<<"\n";

    }
    else{
        top--;
    }
}
int Top(){
    return A[top];
}
bool isEmpty(){
    if(top== -1)
        return true;
    else
        return false;
}
void print(){
    int i;
    std::cout<<"The stack is currently"<<"\n";
    for(i=0;i<=top;i++){
        std::cout<<A[i]<<" ";
    }
    std::cout<<"\n";
}
int main(){
    int top;
    bool isempty;
    push(2);
    print();
    push(5);
    print();
    push(10);
    print();
    pop();
    print();
   push(12);
   print();
  top= Top();
  std::cout<<top<<"\n";
   isempty=isEmpty();
  std::cout<<isempty<<"\n";
}
