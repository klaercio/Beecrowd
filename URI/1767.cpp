#include <bits/stdc++.h>

using namespace std;

void mochila(int *P, int *V, int n, int C);

int main() {
  int n, P[101], V[101], i, aux, t;

  cin >> n;

  while(n--){
    cin >> t;

    for (i = 1; i <= t; i++)
      cin >> V[i] >> P[i];

    mochila(P, V, t, 50);
  }

  return 0;
}

void mochila(int *P, int *V, int n, int C) {
  int M[n+1][C+1], pr[n+1][C+1], prod[n+1][C+1], i, j, q;

  for (i = 0; i <= n; i++)
    for (j = 0; j <= C; j++)
      if (i == 0 || j == 0)
        M[i][j] = pr[i][j] = prod[i][j] = 0;
      else {
        M[i][j] = M[i-1][j];
        pr[i][j] = pr[i-1][j];
        prod[i][j] = prod[i-1][j];

        if (P[i] <= j) {
          q = V[i] + M[i-1][j-P[i]];

          if (q > M[i][j]){
            M[i][j] = q;
            pr[i][j] = P[i] + pr[i-1][j-P[i]];
            prod[i][j] = prod[i-1][j-P[i]] + 1;
          }
        }
      }

  printf("%d brinquedos\nPeso: %d kg\nsobra(m) %d pacote(s)\n\n", M[n][C], pr[n][C], n - prod[n][C]);
}


