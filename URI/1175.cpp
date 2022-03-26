#include <stdio.h>

int main() {
  int vet[20], aux, cont = 19, i = 0;

  while (i < 20){
    scanf("%d", &vet[i]);
    i++;
  }

  i = 0;

  while( i < 10) {
    aux = vet[cont];
    vet[cont--] = vet[i];
    vet[i] = aux;
    i++;
  }

  while (i < 20){
    printf("N[%d] = %d\n",i , vet[i]);
    i++;
  }


  return 0;
}
