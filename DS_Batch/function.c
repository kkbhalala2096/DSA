#include <stdio.h>
void getdata();
void multiply(int, int);
void getdata()
{
    int a, b;
    printf("Enter two values: ");
    scanf("%d%d", &a, &b);
    multiply(a, b);
}
void multiply(int x, int y)
{
    printf("\n multiply : %d", x * y);
}
int main()
{
    getdata();
}