#include<bits/stdc++.h>
using namespace std;

int partitioning(int arr[], int lo, int hi)
{
    int i= lo, j = hi;
    int pivot = arr[lo];
    do
    {
        do{i++;}while(arr[i]<=pivot);
        do{j--;}while(arr[j]>pivot);
        if(i<j)
        {
            swap(arr[i], arr[j]);
        }
        
    }
    while(i<j);
    swap(arr[j],arr[lo]);
    return j;
}


void quickSort(int a[], int lo, int hi)
{
	if(lo<hi)
	{
	int j = partitioning(a,lo,hi);
    quickSort(a,lo,j);
    quickSort(a,j+1,hi);
	}
    
}

void display(int a[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}

int main()
{
    int a[6] ={3,5,2,5,1,INT_MAX};
    int lo = 0, hi =5;
    quickSort(a,lo,hi);
    display(a,5);
}
