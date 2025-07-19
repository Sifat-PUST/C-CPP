#include <stdio.h>
#include <string.h>

int main( )
{
    int x,y;
    while(1)
    {
        scanf("%i%i",&x,&y);
        printf("%i",x%y);
    }
}
