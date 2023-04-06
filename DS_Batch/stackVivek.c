
#include <stdio.h>
#define n 10
int top = -1;
int a[n];

void menu()
{
    printf("\n*************************");
    printf("\n1: push");
    printf("\n2: pop");
    printf("\n9: print");
    printf("\n*************************");
}

void push(int x)
{
    printf("Enter a value: ");
    scanf("%d", &x);
    if (top == n - 1)
        printf("\n overflow");
    else
        a[++top] = x;

    printf("\ntop : %d", top);
}

int pop()
{
    int y;
    if (top == -1)
        printf("\n underflow");
    else
        y = a[top--];
    // printf("\ntop : %d ", top);
    return y;
}
void printStack()
{
    for (int i = top; i >= 0; i--)
    {
        printf("\n %d", a[i]);
    }
}

int main()
{
    int option, top = -1, x, y;
    int z;

    do
    {
        menu();
        printf("\nenter option : ");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            push(x);
            break;
        case 2:
            z = pop();
            printf("\nPoped element is : %d", z);
            break;
        case 9:
            printStack();
            break;
        default:
            printf("Invalid nuber");
            break;
        }
    } while (option != 0);
}
