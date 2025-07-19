#include<stdio.h>
void minmax(int a[][2],int x,int y,int *max,int *min)
{
     int *i,j;
     for(i=&a[0][0];i<&a[x-1][y-1];i++)
     {
         if(*max<*i)
            *max=*i;
         if(*min>*i)
            *min=*i;
     }
}
int main()
{
     int i,j,len,row,col=2;
     int A[][2]={{4,2},{3,100},{500,1}};
     row=sizeof(A)/sizeof(int )/col;
     int min,max;
     min=max=A[0][0];
    //printf("%i ",row);
    minmax(A,row,col,&max,&min);
    printf("Max=%i    Min=%i",max,min);
}

