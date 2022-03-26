#include <bits/stdc++.h>
#define tam 200

using namespace std;
int l, c, minimo = 40000, cor, TAM = 1, cont = 1, aux = 0;
int mosaico[tam][tam];

void floodfill();
void floodfillR(int i, int j);

int main() {

  scanf("%d %d ", &l, &c);

  for (int i = 0; i < l; i++)
    for (int j = 0; j < c; j++)
      scanf("%d", &mosaico[i][j]);

  floodfill();

  printf("%d\n", minimo);

  return 0;
}


void floodfill() {
  for (int i = 0; i < l; i++)
    for (int j = 0; j < c; j++)
      if (mosaico[i][j] != -100){
        cor = mosaico[i][j];
        floodfillR(i, j);
        cont = 1;
        minimo = min (minimo, aux);
        aux = 0;
      }
}

void floodfillR(int i, int j) {
  mosaico[i][j] = -100;

 if (i > 0 && mosaico[i-1][j] == cor){
    cont++;
    floodfillR(i-1, j);
  }

  if (i < l - 1 && mosaico[i+1][j] == cor){
    cont++;
    floodfillR(i+1, j);
  }

  if (j < c - 1 && mosaico[i][j+1] == cor){
    cont++;
    floodfillR(i, j+1);
  }

  if (j > 0 && mosaico[i][j-1] == cor){
    cont++;
    floodfillR(i, j-1);
  }

  aux = max(aux, cont);
}
