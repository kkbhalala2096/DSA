#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, max = 50, min = 10, arr[10];
    for (i = 0; i < 100; i++)
        printf(" %d", i % (max - min + 1) + min);

    // arr[i] = rand() % (max - min) + min;
    // printf(" %d", rand() % (max - min + 1) + min);

    // for (i = 0; i < 10; i++)
    // printf(" %d", arr[i]);
}