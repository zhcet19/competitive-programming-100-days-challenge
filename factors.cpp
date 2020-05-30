#include<iostream>
#include <cmath>
#include <vector>
#include <bits/stdc++.h>
int main()
{
    int n;
    std::cout<<"enter the no of which to calculate factors:";
    std::cin>>n;
    int i;
    std::vector<int>v;
    for(i=1;i<=sqrt(n);i++)
    {
        if(n%i==0 && i!=sqrt(n))
        {
            v.push_back(i);
            v.push_back(n/i);

        }
        else if(i==sqrt(n))
         {
             v.push_back(i);
         }
    }
    sort(v.begin(),v.end());

    for(i=0;i<v.size();i++)
    {

        std::cout<<v[i]<<" ";
    }
     return 0;

    }
