//Given a no N,in how many ways can you write the number as sum of 1 and 2
//DynamicProgramming
#include<iostream>
using namespace std;
int dynamize(int res1, int res2)
{
    int a,b;
     a=0;
     b=1;
    int sum1=0;
    for(int i=1;i<=res1;i++)
    {
        sum1=a+b;
        a=b;
        b=sum1;
    }

   int c=0;
   int d=1;
    int sum2=0;
    for(int j=1;j<=res2 ;j++)
    {

        sum2=(c+d);
        c=d;
        d=sum2;
    }

   return sum1+sum2 ;

}
int main()
{  int n;
int res=0;
int res1,res2;
    std::cout<<"Enter the no of which you want to find all  possible combinations"<<endl;
    std::cin>>n;
    if (n==1)
    {   res=1;
        std::cout<<res<<endl;}
     else if(n==2)
     {
         res=2;
         std::cout<<res<<endl;
     }
     else{
    res1=n-1;
    res2=n-2;
    res=dynamize(res1,res2);
    std::cout<<"The result is:-"<<endl;
    std::cout<<res;}

    return 0;
}
