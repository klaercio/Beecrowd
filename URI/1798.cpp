#include <bits/stdc++.h>

using namespace std;

/*

Dados os conjuntos de pesos P[1..n] e de valores V[1..n], e uma mochila de
capacidade C:

M[j]: maior valor obtido com produtos P[1..i] com, mochila de j kg.

M[j] = 0, j = 0,
          M[j], se P[i] > j ,j > 0,
          max(V[i] + m[j-P[i]], M[j]), se p[i] <= j e j > 0.

Calcular M[C].

*/

int mochila(int *P, int *V, int n, int C);

int main() {
  int P[1001] = {0},
      V[1001] = {0}, n, C;

  cin >> n >> C;

  for (int i = 0; i < n; i++) {
    scanf("%d %d", &P[i], &V[i]);
  }

  printf("%d\n", mochila(P, V, n, C));
  return 0;
}

int mochila(int *P, int *V, int n, int C) {
  int M[C+1] = {0}, i, j, q;

  for (i = 1; i <= n; i++)
    for (j = 1; j <= C; j++){
      if (P[i] <= j) {
        q = V[i] + M[j-P[i]];

        if (q > M[j])
            M[j] = q;
      }
    }

  return M[C];
}







