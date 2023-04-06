#include <stdio.h>
#include <stdlib.h>
#define n 10
void printArray(int a[])
{
    // printf("\n Array \n");
    // for (int i = 0; i < 10; i++)
    //     printf("%d\t", i);
    printf("\n\n");
    for (int i = 0; i < 10; i++)
        printf("%d\t", a[i]);
}
int binarySearch(int a[], int lb, int ub, int val)
{
    int mid;
    if (ub >= lb)
    {
        mid = (lb + ub) / 2;

        if (a[mid] == val)
        {
            return mid + 1;
        }
        else if (a[mid] < val) //x<a[m]
        {
            return binarySearch(a, mid + 1, ub, val);
        }
        else
        {
            return binarySearch(a, lb, mid - 1, val);
        }
    }
    else
        return -1;
}
void bubble_sort(int arr[])
{
    int i, j, key;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                key = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = key;
            }
        }
        printArray(arr);
    }
}
void selection_sort(int arr[])
{
    int i, j, key;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                // printArray(arr);
                key = arr[i];
                arr[i] = arr[j];
                arr[j] = key;
            }
        }
    }
    // printArray(arr);
}

int main()
{
    int a[20], min = 20, max = 101, val;
    for (int i = 0; i < n; i++)
        a[i] = (rand() % (max - min + 1)) + min;
    printArray(a);
    // selection_sort(a);
    bubble_sort(a);
    // binarySearch(a, 0, n, 10);
    printArray(a);
    return 0;
}
/*
B-Search
37
Array

0       1       2       3       4       5       6       7       8       9
22      34      37      40      48      61      82      83      86      100

lb                                                                      ub
                                m
iteration :1
ub>=lb 
m = (0+9)/2 = 4
    a[m] == x
    x < a[m]  T

lb       m                ub        

iteration :2
ub>=lb 
    m = (0+3)/2 = 1 
        a[m] = 34

               lb        ub
m = 2+3 = 2



*/

/*bubble-sort
i=0 ,j=0  a[0]>a[1]
61      37      40      34      83      82      100     22      86      48
i=0 ,j=0  a[1]>a[2]
37      61      40      34      83      82      100     22      86      48

37      40      61      34      83      82      100     22      86      48

37      40      34      61      83      82      100     22      86      48

37      40      34      61      83      82      100     22      86      48

for(i=0;i<n;i++)
{
    for(j=0;j<n-1;j++)
    {
        if(a[j]>a[j+1])
    }


}


*/