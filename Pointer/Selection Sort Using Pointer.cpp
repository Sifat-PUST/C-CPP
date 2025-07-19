#include<bits/stdc++.h>
using namespace std;
void print(int a[],int n)
{
    for(auto i=0;i<n;i++)
        cout<<*(a+i)<<" ";
    cout<<endl;
}
void swapping(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void SelectionSort(int a[],int n)
{
    int min;
    for(auto i=0;i<n-1;i++)
    {
        min=i;
        for(auto j=1;j<n-i;j++)
        {
            if(*(a+min)>*(a+i+j))
                min=i+j;
            else;
        }
        swapping((a+i),(a+min));
        //print(a,n);
    }
}
int main()
{
    int A[]={5,3,1,4,2};
    int len=sizeof(A)/sizeof(int);
    cout<<"Before Sort :"<<endl;
    print(A,len);
    cout<<"After Sort :"<<endl;
    SelectionSort(A,len);
    print(A,len);
}
