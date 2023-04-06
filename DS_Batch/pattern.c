#include <stdio.h>
int main()
{
    void pattern(int);
    pattern(3);
    pattern(5);
    pattern(7);
}
void pattern(int n)
{
    int i, j, sp = 10;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j < sp; j++)
            printf(" ");
        for (j = 1; j <= i; j++)
        {
            printf(" *");
        }
        printf("\n");
        sp--;
    }
}