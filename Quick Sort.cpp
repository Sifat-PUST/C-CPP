#include<bits/stdc++.h>
using namespace std;
int partitaion(int *a,int l,int h)
{
    int pivot=a[l];
    int i=l,j=h;

    while(i<j)
    {
        while(a[i]<=pivot)
            i++;
        while(a[j]>pivot)
            j--;
        if(i<j)
            swap(a[i],a[j]);
    }
    swap(a[j],a[l]);
    return j;
}
void QuickSort(int *a,int l,int h)
{
    if(l<h)
    {
        int j=partitaion(a,l,h);
        QuickSort(a,l,j-1);
        QuickSort(a,j+1,h);
    }
}
int main()
{
    int A[6]={4,1,5,3,6,2};
    int l=0,h=5;
    QuickSort(A,l,h);
    for(int i=0;i<6;i++)
    {
        cout<<A[i]<<" ";
    }
}
