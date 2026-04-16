#include <stdio.h>
#include <stdlib.h>

int main (){

    //alocacao com malloc
   int *p;
   p = (int *) malloc(50 *sizeof(int));
   if (p == NULL){
    printf("Error: Memoria Insuficiente!\n");
   }

   //alocacao com calloc
   int *p1;
   p1 = (int *) calloc(50, sizeof(int));
   if (p1 == NULL){
    printf("Error: Memoria Insuficiente!\n");
   }
   
    return 0;
}