#include<stdio.h>
int sort(int *a,int x)
{
    int i,j,p;
    for(i=0;i<x-1;i++)
    {
        for(j=0;j<x-1-i;j++)
        {
            //printf("%i",*(a+5-1));
            if(*(a+j)>=*(a+j+1))
            {
                p=*(a+j);
                *(a+j)=*(a+j+1);
                *(a+j+1)=p;

            }
        }
    }
}
int main()
{
    int A[]={2,8,5,7,1,10},len;
    len=sizeof(A)/sizeof(int);
    //printf("%i",len);
    sort(A,len);
    int i;
    for(i=0;i<len;i++)
        printf("%i ",*(A+i));
    return 0;
}

