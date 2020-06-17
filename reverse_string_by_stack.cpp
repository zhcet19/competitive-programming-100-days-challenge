#include<iostream>
#include<stack>
#include<string.h>
using namespace std;
void Reverse(char c[],int n)
{
    stack<char> S;
    for(int i=0;i<n;i++)
    {

        S.push(c[i]);
    }
    for(int i=0;i<n;i++)
    {

        c[i]=S.top();
        S.pop();
    }

}
int main(){
    char c[100];
    int n;
    std::cout<<"Enter a string"<<"\n";
    gets(c);
    n=strlen(c);
    Reverse(c,n);
    std::cout<<"Output string is"<<c<<"\n";
}
