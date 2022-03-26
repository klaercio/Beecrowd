#include <bits/stdc++.h>

using namespace std;

int mochila(int *P, int *V, int n, int C);
int c;

int main() {
  int n, P[101], V[101], i;

  while(cin >> n && n != 0){
    cin >> c;

    for (i = 1; i <= n; i++) {
      cin >> V[i] >> P[i];
    }
    printf("%d min.\n", mochila(P, V, n, c));
  }


  return 0;
}

int mochila(int *P, int *V, int n, int C) {
  int **M;
  int i, j, q;

  M = (int**) calloc (n+1,sizeof(int*));

  M[0] = (int*) calloc (c+1, sizeof(int));

  for (i = 1; i <= n; i++){
    M[i] = (int*) calloc (c+1, sizeof(int));
    for (j = 1; j <= C; j++){
        M[i][j] = M[i-1][j];

        if (P[i] <= j) {
          q = V[i] + M[i-1][j-P[i]];

          if (q > M[i][j])
            M[i][j] = q;
        }
    }
  }

  return M[n][C];
}
