#include <bits/stdc++.h>

using namespace std;

int vis[2500] = {0}, ct = 1, **vet, Bs = 0;
char b[2500];

void GRAPHdfsR(int **G, int vert, int v);
bool GRAPHdfs(int **G, int v);

int main() {
  int v, a, i, x, y;

  while (scanf("%d %d", &v, &a) != EOF) {
    vet = (int**) calloc(v, sizeof(int*));

    for (int aux = 0; aux < v ; aux++){
      vet[aux] = (int*) calloc(v, sizeof(int));
      scanf(" %c", &b[aux]);
    }

    for (i = 0; i < a; i++){
      scanf("%d %d", &x, &y);
      vet[x-1][y-1] = 1;
      vet[y-1][x-1] = 1;
    }

    if (GRAPHdfs(vet, v))
      printf("%c\n",'Y');
    else
      printf("%c\n",'N');

  }

  free(vet);

  return 0;
}

void GRAPHdfsR(int **G, int vert, int v) {
  vis[vert] = ct++;

  for (int c = 0; c < v; c++)
    if (G[vert][c] && vis[c] == -1){
      if (b[c] == 'B')
        Bs++;

      GRAPHdfsR(G, c, v);
    }
}

bool GRAPHdfs(int **G, int v) {
  Bs = 0;

  for (int c = 0; c < v; c++)
     vis[c] = -1;

  for (int V = 0; V < v; V++)
    if (vis[V] == -1){
      if (b[V] == 'B')
        Bs++;

      GRAPHdfsR( G, V, v);

      if (Bs % 2 == 1)
        return false;

      Bs = 0;
    }

  return true;
}
