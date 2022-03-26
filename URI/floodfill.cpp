#include <bits/stdc++.h>
#define TAM 50

using namespace std;

void floodfill();
void floodfillR(int i, int j);

int l, c, cont = 0, maximo = 0;
int M[TAM][TAM];

int main() {
  int i, j;

  scanf("%d %d", &l, &c);

  for (i = 0; i < l; i++)
    for (j = 0; j < c; j++)
      scanf("%d", &M[i][j]);

  floodfill();

  return 0;
}

void floodfill() {
  int i, j;

  for (i = 0; i < l; i++)
    for (j = 0; j < c; j++)
      if(M[i][j] == 1){
        floodfillR(i, j);
        maximo = max(maximo, cont);
        cont = 0;
      }
}

void floodfillR(int i, int j) {
  M[i][j] = -1;
  cont++;

 if (i > 0 && M[i-1][j] == 1){
    floodfillR(i-1, j);
  }

  if (i < l - 1 && M[i+1][j] == 1){
    floodfillR(i+1, j);
  }

  if (j < c - 1 && M[i][j+1] == 1){
    floodfillR(i, j+1);
  }

  if (j > 0 && M[i][j-1] == 1){
    floodfillR(i, j-1);
  }
}
