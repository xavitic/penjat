#include <stdio.h>

int main(){

    int a = 3;

    printf("%p\n", &a);

    int* b = &a;

    printf("%p\n", b);

    printf("%d\n", *b);

    int llista[4] = {1,2,3,4};

    printf("%i\n", llista[0]);
    printf("%i\n", llista[1]);
    printf("%i\n", llista[2]);
    printf("%i\n", llista[3]);

    printf("%p\n",&llista);

    int *posicio = llista + 4;

    printf("%d\n", *posicio);



}