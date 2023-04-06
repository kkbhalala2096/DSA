#include<stdio.h>
struct area {
    int l;
    int b1;
    int b2[20];
 
};
int main()
{
    struct  area rect={10,20};  //struct init
    struct  area *sq;  //struct init
    // printf("\nrect l : %d",rect.l);
    // printf("\nrect b : %d",rect.b);
    // printf("\nrect area : %d",rect.l*rect.b);
    printf("\n %d ",sizeof(rect));
    printf("\n %d ",sizeof(sq));

}