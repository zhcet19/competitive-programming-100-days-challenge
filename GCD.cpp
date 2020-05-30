#include<iostream>
int main()
{ int a,b;
  std::cout<<"enter the two no of which you want to calculate gcd";
  std::cin>>a>>b;
  int divisor,divident;
  if(a>b)
  {
      divident=a;
      divisor=b;
  }
  else{
    divident=b;
    divisor=a;
  }
  while(divisor!=0)
  {
      int remainder=divident%divisor;
       divident=divisor;
       divisor=remainder;

  }
  std::cout<<"the gcd of the two no is:-"<<divident;
  return 0;}
