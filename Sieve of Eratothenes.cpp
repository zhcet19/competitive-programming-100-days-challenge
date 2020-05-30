#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    int i,j=0;
    std::cout<<"enter the no upto which you want to find all the prime no";
    std::cin>>n;
    int prime[1000];
    for(int i=0;i<=n;i++)
    {
        prime[i]=1;
        prime[0]=0;
        prime[1]=0;
}
for(int i=2;i<sqrt(n);i++)
{
    if(prime[i]==1)
    {

        for(int j=2;i*j<=n;j++)
        {

            prime[i*j]=0;
        }
    }

}
for(int i=2;i<=n;i++){
    if(prime[i]==1)
       std::cout<<i<<" ";
}
return 0;}

