#include<iostream>
using namespace std;
//time complexity is O(log n)
//Using iterative approach for binary search keeping time complexity of linear searsh under consideration
int Binarysearch(int A[],int n,int x)
{
    int start=0;
    int end=n-1;
    int mid;
    while(start<=end)
    {
       mid=(start+end)/2;
       if(A[mid]== x)
        {return mid;}
       else if(x<mid)
       {
           end=mid-1;
       }
       else if(x>mid)
       {
           start=mid+1;
       }
    }
  return -1;
}
int main()
{  int n;
    std::cout<<"Enter the size of array"<<"\n";
    std::cin>>n;
    int A[n];
    std::cout<<"Enter the elements of array"<<"\n";
    for(int i=0;i<n;i++)
    {

        cin>>A[i];
    }
    int x;
    int ans;
    std::cout<<"Enter the elemenyt to be searched "<<"\n";
    std::cin>>x;
    ans=Binarysearch(A,n,x);
    if(ans!=-1)
    {
        std::cout<<"the elment is found at position "<<ans<<"\n";
    }
    else
    {
        std::cout<<"Element could not be found in the array"<<"\n";
    }



}


