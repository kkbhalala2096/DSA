// Self referential structure
#include <stdio.h>
struct node
{
    int n;
    char c;
    struct node *ptr;
};
int main()
{
    struct node var1;
    struct node var2;

    var1.n = 65;
    var1.c = 'A';
    var1.ptr = NULL;

    var2.n = 66;
    var2.c = 'B';
    var2.ptr = NULL;

     var2.ptr = &var1;
     var1.ptr = &var2;

    printf("\n %d %c", var1.n, var1.c);
    printf("\n %d %c", var2.n, var2.c);
    printf("\n %d  %c", var2.ptr->n, var2.ptr->c);
    printf("\n %d  %c", var1.ptr->n, var1.ptr->c);
    
    
}