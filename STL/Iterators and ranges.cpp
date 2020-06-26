#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
//WORKING WITH RANGES
    /*following code sorts a vector using the function sort, then
reverses the order of the elements using the function reverse, and finally shuffles
the order of the elements using the function random_shuffle.*/
vector<int>v={1,3,2,7,4,5};
sort(v.begin(),v.end());
reverse(v.begin(), v.end());
random_shuffle(v.begin(), v.end());
for(auto x:v)
    { cout<<x<<"\n";

}
/*Set iterators
Iterators are often used to access elements of a set. The following code creates an
iterator it that points to the smallest element in a set:*/
set<int>s={1,3,2,9,5,6};
set<int>::iterator it = s.begin();
for (auto it = s.begin(); it != s.end(); it++) {
cout << *it <<" ";
}
cout<<"\n";
//Printing max  number of set
cout<<"The maximum element in the set is:-"<<"\n";
auto im=s.end(); im--;
cout<<*im<<"\n";
int x;
cout<<"enter the number to be searched in set s"<<"\n";
/*The function find(x) returns an iterator that points to an element whose
value is x. However, if the set does not contain x, the iterator will be end.*/
cin>>x;
auto ifound = s.find(x);
if (ifound == s.end()) {
cout<<"could not find  x"<<"\n";
}
else{
    cout<<"Element found at position"<<"\n";
}

return 0;
         }

