/*
--> collection of homogeneous data.
--> homogeneous / heterogenous 

*/

#include <stdio.h>
#define n 10
int main()
{
    int i;
    int a[n] = {12, 32, 43, 54, 65, 76};
    printf("\n1 %d", a[1]);  //32
    printf("\n2 %d", a[-1]); //32
    printf("\n3 %d", a[9]); //32
    for (i = 0; i < 10; i++)
    {
        printf("\n %d", a[i]); //32
    }
}