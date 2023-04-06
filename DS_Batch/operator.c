#include <stdio.h>
int main()
{
    // printf("%d", 10 < 20);
    // printf("\n %d", 20 >= 20);
    // printf("\n %d", 1 < 2 < 3);
    // printf("\n %d", 1 > 2 > 3);
    // printf("\n %d", 3 < 2 < 1);
    // printf("\n %d", 112 < 324 < 343);
    // printf("\n %d", 112 < 112 < 112);
    // printf("\n %d", 112 < 112 < 112);
    // printf("\n %d", 10 < 4 > 10);  //0
    // printf("\n %d", 10 < 40 > 10); //
    // printf("\n %d", 1 < 0 > 1);   //0
    // printf("\n %d", 1 >= 0 <= 1); //
    // printf("\n %d", 10 < 4 > 10);
    // printf("\n %d", 10 < 4 > 10);

    // printf("\n %d", 1 && 0); //
    // printf("\n %d", 0 && 0); //
    // printf("\n %d", 0 && 1); //
    // printf("\n %d", 1 && 1); //

    // printf("\n %d", 1 || 0); //1
    // printf("\n %d", 0 || 0); //0
    // printf("\n %d", 0 || 1); //1
    // printf("\n %d", 1 || 1); //1

    // ^ --> x-OR / Exclusive OR

    // printf("\n %d", 1 ^ 0); //1
    // printf("\n %d", 0 ^ 0); //0
    // printf("\n %d", 0 ^ 1); //1
    // printf("\n %d", 1 ^ 1); //0
    // int i = 3;
    // printf("\n %d", i++);
    // printf("\n %d", ++i);
    // printf("\n %d", i);
    // printf("\n %d %d %d %d", i++, i++, i++, i); // 12 11 10 13
    // printf("\n %d %d %d", i, i++, i++); //
    //11 10 12
    //10 11 12

    // printf("\n %d %d %d %d", ++i, ++i, ++i, i); //11 12 13 13
    // printf("\n %d %d %d %d", ++i, ++i, i, ++i); //11 12 13 13

    //11 11 10 --5
    //13 13 10 --1
    //12 12 10 --1
    // printf(" %d", i++);
    // printf(" %d", i++);
    // printf(" %d", i);
    // printf("%d", i);
    // printf("%d", i);
    // printf("\n %d %d %d", i, i++, i++); //
    // printf(" world ", printf("Hello"));

    // printf("\n %d %d %d %d", i++, i++, i++, i); // 12 11 10 13
    // printf("\n %d %d %d %d", i, i++, i++, i++);

    // printf("\n %d %d %d %d", ++i, ++i, ++i, i);
    // int n = printf("Hello");
    // printf("%d", n);

    int a = 10, b = 20, c = 30;
    printf("%d", (a > b && a > c) ? a : b > c ? b : c);
    printf("%d",  b > c ? b : c);




}