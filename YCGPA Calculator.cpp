#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Semester No:";
    cin>>n;
    //6 semester completed
    float sifat[]={3.32,3.52,3.42,3.32,3.41,3.18,3.50,3.50};
    float faruk[]={3.19,3.37,3.50,3.58,3.82,3.78,3.50,3.5};
    float nihal[]={2.67,3.33,3.32,3.42,3.50,3.50,3.50,3.5};

    float credit[]={19.5,19.5,20.25,19.25,21,22,21,22.5};
    float cg=0,c=0;
    for(int i=0;i<n;i++)
    {
        cg+=credit[i]*sifat[i];
        c+=credit[i];
    }
    cout<<endl<<"YCGPA :"<<cg/c<<endl;
}
