#include <stdio.h>
#include <stdlib.h>
#define n 10
void printArray(int a[])
{
    printf("\n Array \n");
    for (int i = 0; i < 10; i++)
        printf("%d\t", i);
    printf("\n");
    for (int i = 0; i < 10; i++)
        printf("%d\t", a[i]);
}
int findPOS(int a[], int element)
{
    int pos;
    for (int i = 0; i < 10; i++)
    {
        if (a[i] == element)
        {
            pos = i + 1;
            break;
        }
        else
        {
            pos = -1;
        }
    }
    return pos;
}
int main()
{
    int a[20], min = 20, max = 101, val;
    int element, pos;
    for (int i = 0; i < n; i++)
        a[i] = (rand() % (max - min + 1)) + min;

    printArray(a);

    printf("\nEntere element for find position = ");
    scanf("%d", &element);
    pos = findPOS(a, element);
    printf("\n pos : %d", pos);
    if (pos < 0)
        printf(" Position for %d is not found", element);
    else
        printf(" Positon of %d is %d ", element, pos);
}