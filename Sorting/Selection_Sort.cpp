#include<iostream>
using namespace std;
//time complexity is O(n**2)
void SelectionSort(int A[],int n)
{

    for(int i=0;i<n-1;i++)
    {
        int minpos=i;
        for(int j=i+1;j<n;j++)
        {
            if(A[j]<A[minpos])
            {
                minpos=j;
            }

        }
        int temp=A[i];
        A[i]=A[minpos];
        A[minpos]=temp;

    }
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
    SelectionSort(A,n);
  std::cout<<"The array after selection sort is"<<"\n";
   for(int i=0;i<n;i++)
    {

        cout<<A[i]<<" " ;
    }



}



