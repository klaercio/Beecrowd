#include <stdio.h>
#include <stdlib.h>

int V, E, Q;

void dfs(int **G, int n);

int main() {
  int **G, t, n, u, v, i, j;

  scanf("%d", &t);

  while (t--) {
    scanf("%d %d %d", &n, &V, &E);
    G = (int **) calloc(V, sizeof(int *));

    for (i = 0; i < V; i++)
      G[i] = (int *) calloc(V, sizeof(int));

    while (E--) {
      scanf("%d %d", &u, &v);
      G[u][v] = G[v][u] = 1;
    }

    printf("\n\n");

    for (i = 0; i < V; i++) {
      printf("%2d:", i);

      for (j = 0; j < V; j++)
        printf(" %d", G[i][j]);

      printf("\n");
    }

    printf("\n\n");
    Q = 0;
    dfs(G, n);
    printf("\n\n%d\n", Q);
  }

  return 0;
}

void dfsr(int **G, int *P, int n) {
  int i;

  P[n] = Q;
  printf("%2d visitado\n", n);

  for (i = 0; i < V; i++)
    if (G[n][i] && P[i] == -1) {
      Q++;
      dfsr(G, P, i);
    }
}

void dfs(int **G, int n) {
  int *P, i;

  P = (int *) calloc(V, sizeof(int));

  for (i = 0; i < V; i++)
    P[i] = -1;

  dfsr(G, P, n);
}
