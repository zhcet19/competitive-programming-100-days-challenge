#include<iostream>
#include <cmath>
int main()
{ int n;
  std::cout<<"enter the no of which you want prime factors :";
  std::cin>>n;
  int i;
  for(i=2;i<=sqrt(n);i++)
  {
      if(n%i==0)
      {

          int count=0;
          while(n%i==0)
          {
              n=n/i;
              count++;

          }
          for(int j=0;j<count;j++)
          {
              std::cout<<i;
              std::cout<<"x";
          }
      }

  }
  if(n!=1)
  {

      std::cout<<n<<" ";
  }
  return 0;
}
