#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 100;
    a = a<<2;
    printf("%d",~a);
    return 0;
}




/*
    int a = 10, b = 20, b2 = 10;
    _Bool c;


    c = (a == b || a == b2) && b==b2*7;
    printf("a=%i < b=%i, c = %d \n", a,b,c);

    printf(c == 1 ? "good" : "bad");
*/
