#include<iostream>
using namespace std;

//time complexity is O(log n)
//Using binary search to find no of rotation needed to change a sorted
//array into a circularly sorted array and finding pivot element
int FindRotationCount(int A[],int n)
{

    int low=0;
    int high=n-1;
    while(low<=high)
    {
        if(A[low]<=A[high])
            return low;
        else
        {
            int mid=(low+high)/2;
            int next=(mid+1)%n;
            int prev=(mid-1+n)%n;
            if(A[mid]<=A[prev] && A[mid]<=A[next])
            {
                return mid;
            }
            else if (A[mid]<=A[high])
            {
                high=mid-1;

            }
            else if(A[mid]>=A[low])
            {

                low=mid+1;
            }
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
int ans;
    ans=FindRotationCount(A,n);
    if(ans!=-1)
    {
        std::cout<<" THe total no of count needed is "<<ans<<"\n";
    }
    else
    {
        std::cout<<"Element could not be found in the array or you don't entered proper circular sorted  array "<<"\n";
    }



}



