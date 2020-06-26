#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*A bitset is an array whose each value is either 0 or 1. For example, the following
code creates a bitset that contains 10 elements:*/
bitset<10> s;
s[1] = 1;
s[3] = 1;
s[4] = 1;
s[7] = 1;
cout << s[4] << "\n";
cout << s[5] << "\n";
// Another way to declare bitset is as follows:-"
bitset<10> a(string("0010011010")); // from right to left
cout << a[4] << "\n"; // 1
cout << a[5] << "\n"; // 0
cout<<"THE NO OF 1'S IN STRING"<<"\n";
cout << a.count() << "\n"; // no of 1 in string a
//we can also perform a variety of bit operations using it
bitset<10> b(string("0010110110"));
bitset<10> c(string("1011011000"));
cout << (c&b) << "\n"; // 0010010000
cout << (c|b) << "\n"; // 1011111110
cout << (c^b) << "\n"; // 1001101110
}
