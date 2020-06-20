#include<iostream>
#include<stdlib.h>
using namespace std;
//time complexity is O(nlogn) in average case and in worst case it is O(n**2)
//example of recursive and divide and conquer algorithm
int partition(int A[],int start,int end)
{
    int pivot=A[end];
    int pIndex=start;
    for(int i=start;i<end;i++)
    {

        if(A[i]<=pivot)
        {
            int temp1=A[i];
            A[i]=A[pIndex];
            A[pIndex]=temp1;

            pIndex=pIndex+1;

        }
    }
    int temp2=A[pIndex];
    A[pIndex]=A[end];
    A[end]=temp2;

return pIndex;
}
void QuickSort(int A[],int start,int end)
{
    if(start>=end)
        return;
    else
    {   int pIndex=partition(A,start,end);
        QuickSort(A,start,pIndex-1);
        QuickSort(A,pIndex+1,end);
    }

}
void printArray(int A[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}
int main()
{
    int A[] = { 12, 11, 13, 5, 6, 7 };
    int start=0;
    int n=sizeof(A)/sizeof(A[0]);
    int end=n-1;

std::cout<<"Given array is \n";
    printArray(A,n);

    QuickSort(A,start,end);

    printf("\nSorted array is \n");
    printArray(A,n);
    return 0;

}
