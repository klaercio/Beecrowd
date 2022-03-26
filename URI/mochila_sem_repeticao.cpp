#include <bits/stdc++.h>

/* ==================================================================
   Dados os pesos P[1..n] e os valores V[1..n] de n produtos e a
   capacidade c da mochila
   1. M[i,j] : maior valor que pode ser coletado de produtos 1..i
               e uma mochila com capacidade j
   2. M[i,j] = 0, se i = 0 ou j = 0
               M[i-1,j], se i > 0, j > 0 e P[i] > j
               max(M[i-1,j], V[i] + M[i-1, j-P[i]]), caso contrário
   3. Calcular M[n,c]
   ==================================================================*/

int mochila(int *P, int *V, int n, int C);

int n, c;
int main() {
  int P[] = {0, 8, 3, 6, 5, 4},
      V[] = {0, 18, 7, 13, 9, 8};'
      n = 5;
      c = 10;

  printf("%d\n", mochila(P, V, n, c));
  return 0;
}

int rastreio (int **M, int n, int c, int *P, int *V);

int mochila(int *P, int *V, int n, int C) {
  int **M;
  int i, j, q;

  M = (int**) calloc (n+1,sizeof(int*));

  for(int i = 0; i <= n; i++)
    M[i] = (int*) calloc (c+1, sizeof(int));

  for (i = 1; i <= n; i++)
    for (j = 1; j <= C; j++){
        M[i][j] = M[i-1][j];

        if (P[i] <= j) {
          q = V[i] + M[i-1][j-P[i]];

          if (q > M[i][j])
            M[i][j] = q;
        }
     }


  return M[n][C];
}








