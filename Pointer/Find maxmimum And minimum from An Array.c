#include<stdio.h>
int minmax(int a[][2],int x,int y,int *max,int *min)
{
     int i,j;
     for(i=0;i<x;i++)
     {
         for(j=0;j<y;j++)
         {
             if(*max<*(*(a+i)+j))
                *max=*(*(a+i)+j);
             if(*min>*(*(a+i)+j))
                *min=*(*(a+i)+j);
         }
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
