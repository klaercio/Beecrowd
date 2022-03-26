#include <stdio.h>
#include <stdlib.h>
#define tam 401

using namespace std;

int l, c, minimo = 40000, cor, TAM = 1;
int mosaico[tam][tam];

void floodfill();
void floodfillR(int i, int j);

int main() {

  scanf("%d %d ", &l, &c);

  for (int i = 0; i < l; i++)
    for (int j = 0; j < c; j++)
      scanf("%d", &mosaico[i][j]);

  floodfill();

  printf("%d", minimo - 1);

  return 0;
}

void floodfill() {
  for (int i = 0; i < l; i++)
    for (int j = 0; j < c; j++)
      if (mosaico[i][j] != -1){
        cor = mosaico[i][j];
        if (TAM < minimo)
          minimo = TAM;
        TAM = 1;
      }
}

void floodfillR(int i, int j) {

  int cont = 0;

 if (i > 0 && mosaico[i-1][j] == cor){
    mosaico[i-1][j] = 0;
    cont++;
    TAM++;
    floodfillR(i-1, j);
  }

  if (i < l - 1 && mosaico[i+1][j] == cor){
    mosaico[i+1][j] = 0;
    cont++;
    TAM++;
    floodfillR(i+1, j);
  }

  if (j < c - 1 && mosaico[i][j+1] == cor){
    mosaico[i][j+1] = 0;
    cont++;
    TAM++;
    floodfillR(i, j+1);
  }

  if (j > 0 && mosaico[i][j-1] == cor){
    mosaico[i][j-1] = 0;
    cont++;
    TAM++;
    floodfillR(i, j-1);
  }

  if (cont == 0){
    minimo = 2;
  }

}
