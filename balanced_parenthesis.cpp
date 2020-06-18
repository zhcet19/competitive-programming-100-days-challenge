#include<iostream>
#include<stack>
#include<string.h>
using namespace std;
bool CheckBalpar(char c[],int n)
{
    stack<char> S;
    int i;
    for(i=0;i<n;i++)
    {
        if(c[i]=='('||c[i]=='{'||c[i]=='[')
            {S.push(c[i]);
             c[i]=S.top();}
        else if(c[i]==')'||c[i]=='}'||c[i]==']')
        {

            if(S.empty() || ((c[i]==')')&& (S.top()!='(')) || ((c[i]=='{')&& (S.top()!='}')) ||((c[i]=='[')&& (S.top()!=']')) )
                {
                    return false;
                }
            else
            {

                S.pop();
            }
        }
    }
    return S.empty()? true:false;

}

int main(){
    char c[100];
    bool res;
    int n;
    std::cout<<"Enter a paranthesis string"<<"\n";
    gets(c);
    res=CheckBalpar(c,strlen(c));
    if(res==0)
    std::cout<<"Not Balanced"<<"\n";
    else if(res==1)
    std::cout<<"Balanced parentheses"<<"\n";

}
