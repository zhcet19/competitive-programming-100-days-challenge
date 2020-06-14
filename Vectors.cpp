
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
 {
    //VECTOR IN C++
std::vector<int> A ;
A= {5,3};
    //pushing an element
    for (int  i=1;i<=5;i++)
    {

        A.push_back(i);
    }
    std::cout<<"Output of the vector is"<<endl;
    //Output  elements
vector<int>::iterator it;
    for(it=A.begin(); it!=A.end(); it++)
    {

        std::cout<<*it<<" ";
    }
    std::cout<<endl;
     for (int  i=1;i<=3;i++)
    {

        A.pop_back();
    }
    //Deleting an element
    std::cout<<"Output of the vector after deleting is"<<endl;
 vector<int>::iterator it1;
    for(it1=A.begin(); it1!=A.end(); it1++)
    {

        std::cout<<*it1<<" ";
    }
    std::cout<<endl;
    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(1230);
    A.push_back(1210);
    A.push_back(1200);

    std::cout<<"Finding first occurence of a number >=100"<<endl;
    vector<int>::iterator it2=lower_bound(A.begin(),A.end(),100);
    std::cout<<*it2<<endl;
    std::cout<<"Finding last occurence of a number >100"<<endl;
    vector<int>::iterator it3=upper_bound(A.begin(),A.end(),100);
    std::cout<<*it3<<endl;

    sort(A.begin(),A.end());

    for (auto m:A)
    {

        std::cout<<m<<" ";
    }
    std::cout<<endl;
    std::cout<<A.front()<<endl;
    std::cout<<A.back()<<endl;
    std::cout<<A.size()<<endl;
    std::cout<<A.max_size()<<endl;
    return 0;
 }
