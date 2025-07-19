#include<stdio.h>
int main()
{
    int A[]={1,2,3,4,5},sum=0,len,*i;
    len=sizeof(A)/sizeof(int);
    for(i=A;i<=A+len;i++)
    {
        sum+=*i;
    }
    printf("%i",sum);
    return 0;
}
