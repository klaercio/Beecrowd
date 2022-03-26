#include <bits/stdc++.h>

using namespace std;

int **G, *P, c, fim;

bool dfs(int v);
void dfsr(int v);

int main() {
  int v, a, i, w, z, q;


  while (scanf("%d %d", &v, &a) && (v || a)) {
    G = (int**) calloc (v, sizeof(int*));
    P = (int*) calloc (v, sizeof(int));

    for (i = 0; i < v; i++)
      G[i] = (int*) calloc (v, sizeof(int));

    for (i = 0; i < a; i++){
      scanf("%d %d %d", &w ,&z ,&q);
      G[w-1][z-1] = 1;

      if (q == 2)
        G[z-1][w-1] = 1;
    }

    printf("%d\n", dfs(v));
  }

  return 0;
}

bool dfs(int v) {
  int a, i, j;

  c = 0;

  for (a = 0; a < v; a++)
    if (!P[a])
      dfsr(a);

  for (i = 0; i < v; i++){
    P[i] = 0;

    for (j = i + 1; j < v; j++)
      swap(G[i][j], G[j][i]);
  }

  for (i = 0; i < v; i++){
    for (j = 0; j < v; j++)
      printf("%3d", G[i][j]);
    printf("\n");
  }

  printf("Fim = %d\n", fim);
  c = 0;
  dfsr(fim);

  return c == v;
}

void dfsr(int v) {
  int i;

  c++;
  P[v] = 1;

  for (i = 0; i < v; i++)
    if (G[v][i] && !P[i])
      dfsr(i);

  fim = v;
  printf("FIM %d\n", fim);
}




