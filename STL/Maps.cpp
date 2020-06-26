#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
int main()
{
    //Mapping integer to integer(0->A[0],1->A[1])
    int x;
    map<int,int>A;
    std::cout<<"Enter the elements of maps "<<endl;
    for(int i=0;i<5;i++)
    {

        cin>>x;
        A[i]=x;
    }
    std::cout<<"The map of input is"<<endl;
for(int i=0;i<5;i++)
    {

        cout<<A[i]<<" " ;

    }
    cout<<endl;
    std::cout<<"After deleting  key 0 and 3in maps"<<endl;
    A.erase(0);
    A.erase(3);
cout<<"Key 3 is now "<<A[3]<<endl;

    map<char,int>cnt;
    string m="Faiz alam";
    for(char c:m)
    {

        cnt[c]++;
    }
    std::cout<<"The count of a in Faiz alam is" <<endl;
    std::cout<<cnt['a']<<endl;


    return 0;}
