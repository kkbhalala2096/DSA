#include <stdio.h>
int fact(int n)
{
    printf("\n %d", n);
    if (n == 0 || n == 1)
        return 1;
    else
        return n * fact(n - 1);
}
int main()
{
    int n = 5;
    printf("factorial of %d is: %d", n, fact(n));
    return 0;
}
