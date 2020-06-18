#include<iostream>
#include<stack>
#include<string.h>

using namespace std;
int EvaluatePostfix(string expression)
{ int res=0;
    stack<int> S;
for(int i=0;i< expression.length();i++)
{
if(expression[i] == ' ' || expression[i] == ',')
    { continue; }
else if(expression[i] >='0' && expression[i] <= '9')
    { int dec;
        dec=expression[i]-'0';

        S.push(dec);
    }

else if(expression[i]=='+' || expression[i]== '-' || expression[i] == '*' || expression[i]== '/')
    {   // Pop two operands.
			int op2 = S.top(); S.pop();
			int op1 = S.top(); S.pop();


        if(expression[i] == '+')
        {
            res=op2+op1;
        }
        else if(expression[i] == '-')
        {
            res=op1-op2;
        }
        else if(expression[i] == '*')
        {
            res=op1*op2;
        }
        else if (expression[i] == '/')
            {
            res=op1/op2;
        }


    S.push(res);
}


}
return S.top();
}
int main()
{
	string expression;
	cout<<"Enter Postfix Expression \n";
	getline(cin,expression);
	int result = EvaluatePostfix(expression);
	cout<<"Output = "<<result<<"\n";
}
