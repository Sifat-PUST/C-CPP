#include<iostream>
//#include<cstring>
using namespace std;
int main()
{
     char name[3][10];
     for(int i=0;i<3;i++)
     {
         cin>>name[i];
     }
     //getline(cin,name);
     cout<<name[1][0]<<endl;
     for(int i=0;i<3;i++)
        cout<<name[i]<<" ";
}
