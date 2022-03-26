#include <stdio.h>
#include <stdlib.h>

typedef struct Carta Carta;

struct Carta{
  int valor;
  Carta *prox;
};

typedef struct{
  Carta *prim;
  int tam;
}Bar;

int sobra(Bar*);

void adicionafinal (Bar *b, int);

int main() {
  int n;

  Bar *b = (Bar*)malloc(50);
  b->prim = NULL;
  b->tam = 0;

  while (scanf("%d", &n) && n) {
    adicionafinal(b, n);
    printf("Discarded cards: ");

    while(n--)
      if(n > 0)
        printf("%d%s", sobra(b), (n>1)? ", ": "");
      else
        printf("\nRemaining card: %d\n", sobra(b));
  }

}

void adicionafinal (Bar *bar, int n) {
  int i;

  Carta *nova, *atual;

  for(i = 1; i <= n; i++ ) {
    nova = (Carta*) malloc(sizeof(Carta));
    nova->valor = i;
    nova->prox = NULL;

    if(bar->prim == NULL) {
      bar->prim = nova;
    }
    else {
      atual = bar->prim;

      while (atual->prox!= NULL)
        atual = atual->prox;


      atual->prox = nova;
    }

    bar->tam++;
  }
}

int sobra(Bar *b){
  int  n, t = b->tam;

  Carta *atual = b->prim,*P;
  n = atual->valor;
  b->prim = atual->prox;
  free(atual);

  if (b->tam > 2) {
    P = b->prim;
    atual = P;
    b->prim = atual->prox;

    while (atual->prox != NULL)
      atual = atual->prox;

    P->prox = NULL;
    atual->prox = P;
  }

  b->tam--;
  return n;
}

