#include<iostream>
using namespace std;

//time complexity is O(log n)
//Using recursive approach for binary search
int Binarysearch(int A[],int low,int high,int x)
{
    int mid;
    mid=(low+high)/2;
    if(low>high)
        return -1;
    else if(A[mid]==x)
        return mid;
    else if(x<A[mid])
        return Binarysearch(A,low,mid-1,x);
    else if(x>A[mid])
        return Binarysearch(A,mid+1,high,x);

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
    int low=0;
 int high=n-1;
    ans=Binarysearch(A,low,high,x);
    if(ans!=-1)
    {
        std::cout<<"the elment is found at position "<<ans<<"\n";
    }
    else
    {
        std::cout<<"Element could not be found in the array"<<"\n";
    }



}



