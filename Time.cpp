#include<iostream>
//#include<ctime>
#include<windows.h>
using namespace std;
int main()
{
    /*time_t t;
    time(&t);
    cout<<ctime(&t);*/
    SYSTEMTIME t;
    GetSystemTime(&t);
    cout<<t.wDay+1<<"/"<<t.wMonth<<"/"<<t.wYear<<endl;
}
