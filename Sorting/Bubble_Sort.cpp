#include<iostream>
using namespace std;
//time complexity is O(n**2)
void BubbleSort(int A[],int n)
{
    for(int k=1;k<n;k++)
    {
        int flag=0;
        for(int i=0;i<n-k;i++)
        {
            if(A[i]>A[i+1])
            {
                int temp=A[i];
                A[i]=A[i+1];
                A[i+1]=temp;
                flag=1;
            }
        }
        if(flag==0)
            break;
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
    BubbleSort(A,n);
  std::cout<<"The array after Bubble sort is"<<"\n";
   for(int i=0;i<n;i++)
    {

        cout<<A[i]<<" " ;
    }



}




