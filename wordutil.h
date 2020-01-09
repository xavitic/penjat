#define TRUE 1
#define FALSE 0

int comptarLletres(char *palabrasParam, int longitudParaula);
int lletraDinsLlista(char* llista, char lletra, int longitudParaula);


int comptarLletres(char *palabrasParam, int longitudParaula){

   int contador = 0;
   int sortir = 0;
   for (int index = 0;index < longitudParaula && !sortir; index++ ){

      if (palabrasParam[index] != '\n') {
         contador += 1;
      } else {
         sortir = 1;
      }
   }

   return contador;
}

int lletraDinsLlista(char* llista, char lletra, int longitudParaula){

   for (int index = 0; index < longitudParaula; index++){
      if (llista[index] == lletra){
         return TRUE;
      }
   }

   return FALSE;
}