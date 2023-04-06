#include <stdio.h>
struct Node
{
    int i;
    char c;
    struct Node *ptr;
};
int main()
{
    struct Node var1;
    struct Node var2;

    var1.i = 65;
    var1.c = 'A';
    var1.ptr = NULL;

    var2.i = 66;
    var2.c = 'B';
    var2.ptr = NULL;

    var1.ptr = &var2;

    printf(" ");
}