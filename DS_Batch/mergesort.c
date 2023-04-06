#include <stdio.h>
void insertionSort(int array[], int size)
{
    for (int step = 1; step < size; step++)
    {
        int key = array[step];
        int j = step - 1;
        while (key < array[j] && j >= 0)
        {
            array[j + 1] = array[j];
            --j;
        }
        array[j + 1] = key;
    }
}
void mergesort(int a[], int i, int j);
void merge(int a[], int i1, int j1, int i2, int j2);
void mergesort(int a[], int i, int j)
{
    int mid;
    if (i < j)
    {
        mid = (i + j) / 2;
        mergesort(a, i, mid);     //left
        mergesort(a, mid + 1, j); //right
        merge(a, i, mid, mid + 1, j);
    }
}
void merge(int a[], int i1, int j1, int i2, int j2)
{

    int temp[50];
    int i, j, k;
    i = i1;
    j = i2;
    k = 0;
    // printf("\n %d %d %d %d ", i, j, a[i], a[j]);
    printf("\n %d %d %d %d ", i1, j1, i2, j2);

    while (i <= j1 && j <= j2)
    {
        if (a[i] < a[j])
            temp[k++] = a[i++];
        else
            temp[k++] = a[j++];
    }
    while (i <= j1)
        temp[k++] = a[i++];
    while (j <= j2)
        temp[k++] = a[j++];

    for (i = i1, j = 0; i <= j2; i++, j++)
        a[i] = temp[j];
}
int main()
{
    int a[30], n, i;
    printf("How many elements are u going to enter?: ");
    scanf("%d", &n);
    printf("Enter array elements:");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    // mergesort(a, 0, n - 1);
    insertionSort(a, n - 1);
    printf("\nSorted array is :");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}