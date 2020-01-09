#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "wordutil.h"

#define NUMERO_PARAULES 15
#define LONGITUD_PARAULA 50

#define TRUE 1
#define FALSE 0
#define MAX_NUM_ERRORS  6


int main()
{

   char encerts[LONGITUD_PARAULA];

   for (int index = 0; index < LONGITUD_PARAULA; index++){
      encerts[index]=0;
   }
 
   // printf() displays the string inside quotation
   printf("P E N J A T \n");

   printf("NUMERO PARAULES: %d\n", NUMERO_PARAULES);

   char palabras[NUMERO_PARAULES][LONGITUD_PARAULA]= {"pollo\n", "arfil\n", "cartes\n", "casa\n", "silla\n", "menjador\n", "roberto\n", "ecologista\n", "veredicte\n", "poma\n", "electrocardioencefalogrames\n", "nicenoconstantinopolitanes\n", "additivomultiplicatives\n", "carbonatohidroxilapatites\n"};

   
   srand(time(NULL));

   int posicioParaula = rand() % NUMERO_PARAULES ;

   printf("Pos paraula: %d\n", posicioParaula);

   char* paraula = palabras[posicioParaula];

   printf("%s\n",paraula);

   int contador = comptarLletres(paraula,LONGITUD_PARAULA);

   printf("La paraula té %d lletres \n", contador);

   int errors = 0;

   int ganar = FALSE;

   int indexEncerts = 0;

   int numeroEncerts = 0;

   while (errors <= MAX_NUM_ERRORS && !ganar){

      printf("Introdueix una lletra\n");

      char lletra;
      scanf("%s",&lletra);
      ganar = TRUE;
      int hemEncertat = FALSE;
      for ( int indexParaula = 0; indexParaula < comptarLletres(paraula,LONGITUD_PARAULA); indexParaula ++ ){
      
         if (paraula[indexParaula] ==  lletra){
            // OK! L'hem trobada!
            printf("%c ",lletra);

            encerts[indexEncerts] = lletra;
            indexEncerts++;
            hemEncertat = TRUE;

         } else { 
            if (lletraDinsLlista(encerts,paraula[indexParaula],LONGITUD_PARAULA)) {
               printf("%c ",paraula[indexParaula]); 

            } else {
               // Siga jugando.... encara no
               printf("_ ");
               ganar = FALSE;
            }
         }
         
      }

      if (!hemEncertat){
         printf("La lletra no es troba!");
         errors++;
      }
   
      
      printf("\n");
   }
   

   if (ganar){
      printf("HAS GUANYAT!!!!");
   } else {
      printf("HAS PERDUT!!!!");
   }


}


