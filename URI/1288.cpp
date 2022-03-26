#include <bits/stdc++.h>

using namespace std;

int missao(int *CA, int *P, int j, int castelo, int tam);

int main () {
  int c, n, a , b = 1, C, castelo, result;
  int *V, *P;

  cin >> c;

  while (c--) {
    cin >> n;
    V = (int*) calloc (n + 1, sizeof(int));
    P = (int*) calloc (n + 1, sizeof(int));

    for (a = 1; a <= n; a++)
      cin >> V[a] >> P[a];

    cin >> C;
    cin >> castelo;
    missao(V,P,C,castelo, n);
}

  free(V);
  free(P);

return 0;
}

int missao(int *CA, int *P, int j, int castelo, int tam) {
  int q, A[tam + 1][j+1] = {0};

  for(int l = 0; l <= tam; l++)
    for(int c = 0; c <= j; c++){
      if(l == 0 || c == 0)
        A[l][c] = 0;

      else{
        A[l][c] = A[l-1][c];
        if (P[l] <= c){
          q = CA[l] + A[l-1][c-P[l]];

          if (q > A[l][c])
            A[l][c] = q;
        }
      }
    }

    if (A[tam][j] >= castelo)
      printf("Missao completada com sucesso\n");
    else
      printf("Falha na missao\n");

return 0;
}




