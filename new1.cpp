#include<iostream>
#include <cmath>
int main()
{
   int num;
   std::cout<<"enter the binary no";
   std::cin>>num;
   int i=0;
   int dec=0;
   int rem=0;
   int count=0;
   int c=num;
   while(c>0)
   {
        c=c/10;
       count++;
   }
   while(num>0)
   {
   for( i=0;i<=count-1;i++)
   {
       rem=num%10;
       dec=dec+rem*(std::pow(2,i));
       num=num/10;
   }}

   std::cout<<"the decimal equilvalent of the no is:";
   std::cout<<dec;
   return 0;}

