#include <stdio.h>
#include <stdlib.h>
// void printArray(int array[3][3]);
void printArray(int array[3][3])
{
    printf("\n-------- Martrix 1 --------\n\n ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("\t%d", array[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int max = 20, min = 0;
    int a[3][3], i, j;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            a[i][j] = rand() % max;

    printArray(a);
    return 0;
}
/*
One dimension aray
******************

1) enter array element ? 

2) insert
    i) insert element
    ii) select random values  

3) Linear Search












*/