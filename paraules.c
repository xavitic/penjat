#include <stdio.h>
#include "wordutil.h"


#define LONGITUD_PARAULA 50


int main(){

    char paraula[LONGITUD_PARAULA];

    printf("Introdueix la paraula:\n");

    fgets (paraula, LONGITUD_PARAULA, stdin);

    printf ("La cadena leída es: %s\n", paraula);

    int numeroLletres = comptarLletres(paraula, LONGITUD_PARAULA);

    if (numeroLletres % 2 == 0){
        printf("El numero de lletres es parell\n");
    } else {
        printf("El numero de lletres es senar\n");
    }

    return 0;
}