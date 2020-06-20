#include<iostream>
using namespace std;

//time complexity is O(log n)
//Using iterative approach for finding first or last occurence of a number
int FirstOccurence(int A[],int n,int x)
{
    int start=0;
    int res=-1;
    int end=n-1;
    int mid;
    while(start<=end)
    {
       mid=(start+end)/2;
       if(A[mid]== x)
        {   res = mid;
            end = mid-1;

        }
       else if(x<mid)
       {
           end=mid-1;
       }
       else if(x>mid)
       {
           start=mid+1;
       }
    }
  return res;
}
int LastOccurence(int A[],int n,int x)
{
    int start=0;
    int res=-1;
    int end=n-1;
    int mid;
    while(start<=end)
    {
       mid=(start+end)/2;
       if(A[mid]== x)
        { res=mid;
            start=mid+1;

        }
       else if(x<mid)
       {
           end=mid-1;
       }
       else if(x>mid)
       {
           start=mid+1;
       }
    }
  return res;
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
    int choice;
    std::cout<<"Enter the element to be searched "<<"\n";
    std::cin>>x;

    std::cout<<"The first occurence is at"<<"\n";
    { ans=FirstOccurence(A,n,x);
    if(ans!=-1)
    {
        std::cout<<"the first occurence of elment is found at position "<<ans<<"\n";
    }
    else
    {
        std::cout<<"Element could not be found in the array"<<"\n";
    }}
    ans=0;
  std::cout<<"the last occurence of the number is at "<<"\n";
    {
        ans=LastOccurence(A,n,x);
    if(ans!=-1)
    {
        std::cout<<"the  last occurence of elment is found at position "<<ans<<"\n";
    }
    else
    {
        std::cout<<"Element could not be found in the array"<<"\n";
    }
    }




}


