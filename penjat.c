#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUMERO_PARAULES 15
#define LONGITUD_PARAULA 50

#define TRUE 1
#define FALSE 0
#define MAX_NUM_ERRORS  6

int comptarLletres(char palabrasParam[]){
   int index = 0;
   int contador = 0;
   int sortir = FALSE;

   while (index < LONGITUD_PARAULA && !sortir ) {
      
      if (palabrasParam[index] != '\n') {
         contador += 1;
      } else {
         sortir = TRUE;
      }

      index += 1;
   }

   return contador;
}


int main()
{

   char encerts[LONGITUD_PARAULA];
 
   // printf() displays the string inside quotation
   printf("P E N J A T \n");

   printf("NUMERO PARAULES: %d\n", NUMERO_PARAULES);

   char palabras[NUMERO_PARAULES][LONGITUD_PARAULA]= {"pollo\n", "arfil\n", "cartes\n", "casa\n", "silla\n", "menjador\n", "roberto\n", "ecologista\n", "veredicte\n", "poma\n", "electrocardioencefalogrames\n", "nicenoconstantinopolitanes\n", "additivomultiplicatives\n", "carbonatohidroxilapatites\n"};

   
   srand(time(NULL));

   int posicioParaula = rand() % NUMERO_PARAULES ;

   printf("Pos paraula: %d\n", posicioParaula);

   char* paraula = palabras[posicioParaula];

   printf("%s\n",paraula);

   int contador = comptarLletres(paraula);

   printf("La paraula té %d lletres \n", contador);

  
   
   int errors = 0;

   int ganar = FALSE;

   while (errors <= MAX_NUM_ERRORS && !ganar){

      printf("Introdueix una lletra\n");

      char lletra = getchar();
      
      if (lletra != 10) {

         for ( int indexParaula = 0; indexParaula < comptarLletres(paraula); indexParaula ++ ){
         
            if (paraula[indexParaula] ==  lletra){
               // OK! L'hem trobada!
               printf("%c ",lletra);

            } else {
               // Siga jugando.... encara no
               printf("_ ");


            }
      }


      }
   }
   

   


}


