#include<iostream>
#include<set>
#include<algorithm>
using namespace std;
int main()
{

    std::set<int> s;
int x;
    std::cout<<"Enter the elements to set\n";
    for(int i=1;i<=10;i++)
    {
        std::cin>>x;
        s.insert(x);
    }
    //Sets by default arranges elements in ascending order but vectors doesn't
    for (int m:s)
    {
        std::cout<<m<<" ";
    }
    std::cout<<endl;
    //Querying an element in Sets
    auto it=s.find(-1);
    if(it==s.end())
    {
        std::cout<<"Elements not exist in sets:"<<endl;
    }
    else{
        std::cout<<"Found element"<<endl;
        std::cout<<*it<<endl;
    }
    std::cout<<"Using Lower bound on 10"<<endl;
    auto it1=s.lower_bound(10);
    std::cout<<*it1<<endl;
    std::cout<<"Using Upper bound on 10"<<endl;
    auto it2=s.upper_bound(10);
    std::cout<<*it2<<endl;
    //Deleting elements lying between 1 to 10
for(int i=1;i<10;i++)
{

    s.erase(i);
}
std::cout<<"Sets after deleting operation is done"<<endl;
for (int n:s)
    {
        std::cout<<n<<" ";
    }

return 0;
}
