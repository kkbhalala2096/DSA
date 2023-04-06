#include <stdio.h>
#define n 25
int totalElement;
// void print(int number[25])
// {
//     int i;
//     for (i = 0; i < totalElement; i++)
//         scanf("%d", &number[i]);
// }

void quicksort(int number[25], int first, int last)
{

    int i, j, pivot, temp;

    if (first < last)
    {

        printf("\n inside quick  : ");
        for (int i = 0; i < totalElement; i++)
            printf(" %d", number[i]);

        pivot = first;
        i = first;
        j = last;

        while (i < j)
        {
            while (number[i] <= number[pivot] && i < last)
                i++;
            while (number[j] > number[pivot])
                j--;
            if (i < j)
            {
                temp = number[i];
                number[i] = number[j];
                number[j] = temp;
            }
        }
        temp = number[pivot];
        number[pivot] = number[j];
        number[j] = temp;
        quicksort(number, first, j - 1);
        quicksort(number, j + 1, last);
    }
}

int main()
{
    int i, number[25];

    printf("How many elements are u going to enter?: ");
    scanf("%d", &totalElement);

    printf("Enter %d elements: ", totalElement);
    for (i = 0; i < totalElement; i++)
        scanf("%d", &number[i]);

    // print(number);

    quicksort(number, 0, totalElement - 1);

    printf("\nOrder of Sorted elements: ");
    for (i = 0; i < totalElement; i++)
        printf(" %d", number[i]);

    // print(number);
    return 0;
}
/*


*/