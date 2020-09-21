#include<bits/stdc++.h>
using namespace std;
#define RANGE 10000
void CountingSort(int A[],int size)
{
    // The output character array
    // that will have sorted arr
  int output[size];

     int count[RANGE + 1];
     int i;
    memset(count, 0, sizeof(count));
    for(int i=0;i<size;i++)
    {

        count[A[i]]++;
    }
     for (i = 1; i <= RANGE; ++i)
     {
         count[i] += count[i - 1];

     }

     for(int i=0;i<size;i++)
     {
           output[count[A[i]] - 1] = A[i];
           --count[A[i]];
     }
     for (int i = 0;i<size; ++i)
     {
         A[i] = output[i];
     }
      for(int i=0;i<size;i++)
    {

        cout<<A[i]<<" ";
    }

}


int main()
{

    int size;
    cout<<"Enter size of array:-"<<"\n";
    cin>>size;
    int A[size];
    cout<<"Enter the array element"<<"\n";
    for(int i=0;i<size;i++)
    {

        cin>>A[i];
    }
    CountingSort(A,size);

}
