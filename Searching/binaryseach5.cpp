#include<iostream>
using namespace std;

//time complexity is O(log n)
//Leetcode questtion
//Using binary search to search an element in a circularly sorted array with no duplication of element

int CircularArraySearch(int A[],int n,int x)
{

    int low=0;
    int high=n-1;
    while(low<=high)
    {  int mid=(low+high)/2;
        if(A[mid]==x)
            return mid;
        else if(A[mid]<=A[high])
        {
            if (x>A[mid]&& x<=A[high])
            {
                low=mid+1;

            }
            else
            {

                high=mid-1;
            }
        }
        else if(A[mid]>=A[low])
        {
            if (x>=A[low]&& x<A[mid])
            {
                high=mid-1;

            }
            else
            {

               low=mid+1;
            }
        }


    }
    return -1;

}
int main()
{  int n;
  int x;
    std::cout<<"Enter the size of array"<<"\n";
    std::cin>>n;
    int A[n];
    std::cout<<"Enter the elements of array"<<"\n";
    for(int i=0;i<n;i++)
    {

        cin>>A[i];
    }
    std::cout<<"Enter the element to be searched "<<"\n";
    std::cin>>x;
  int ans;
    ans=CircularArraySearch(A,n,x);

    if(ans!=-1)
    {
        std::cout<<"the element is found at position "<<ans<<"\n";
    }
    else
    {
        std::cout<<"Element could not be found in the array"<<"\n";
    }



}

