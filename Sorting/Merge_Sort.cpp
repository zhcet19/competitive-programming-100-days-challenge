#include<iostream>
#include<stdlib.h>
using namespace std;
//time complexity is O(nlogn)
//example of recursive and divide and conquer algorithm
void Merge(int A[],int left[],int lc,int right[],int rc)
{

    int i=0;
    int j=0;
    int k=0;
    while(i<lc && j<rc)
    {
        if(left[i]<=right[j])
        {
            A[k]=left[i];
            k=k+1;
            i=i+1;
        }
        else if(right[j]<=left[i])
        {
            A[k]=right[j];
            k=k+1;
            j=j+1;
        }
    }
    while(i<lc)
    {
        A[k]=left[i];
            i++;
            k++;
    }
    while(j<rc)
    {
        A[k]=right[j];
            k++;
            j++;
    }
}

void MergeSort(int A[],int n)
{
    if(n<2)
        return ;
    else
    {
        int mid=n/2;
         int left[mid];
         int right[n-mid];
        for(int i=0;i<mid;i++)
        {
            left[i]=A[i];

        }
        for(int i=mid;i<n;i++)
        {
            right[i-mid]=A[i];
        }

        MergeSort(left,mid);
        MergeSort(right,n-mid);
        Merge(A,left,mid,right,n-mid);

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
    int n = sizeof(A) / sizeof(A[0]);

std::cout<<"Given array is \n";
    printArray(A,n);

    MergeSort(A,n);

    printf("\nSorted array is \n");
    printArray(A,n);
    return 0;

}




