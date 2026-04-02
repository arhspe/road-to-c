#include <stdio.h>

int main() {

    int *p, *p1, x = 10;
    float y = 20.0;

     p = &x;

     printf("Conteudo apontado por p: %d \n",*p);

     p1 = p;

     printf("Conteudo apontado por p1: %d \n",*p1);

     p = &y;
/*
error: assignment to 'int *' from incompatible pointer type 'float *' [-Wincompatible-pointer-types]
   16 |      p = &y;
      |        ^
*/

     printf("Conteudo apontado por p: %d \n",*p);
     printf("Conteudo apontado por p: %f \n",*p);
     printf("Conteudo apontado por p: %f \n",*((float*)p));

    return 0;
}

