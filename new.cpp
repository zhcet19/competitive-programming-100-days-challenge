#include<iostream>
int main()
{
     int num ;
    std::cout<<"enter the no to convert from decimal to binary:";
    std::cin>>num;
    int a[10];
    int i=0;
    for(i=0;num>0;i++)
    {
        a[i]= num%2;

        num=num/2;
    }

    std::cout<<"the binary output is";
    for(i=i-1;i>=0;i--)
    {
       std::cout<<a[i];
    }
  return 0;

}
