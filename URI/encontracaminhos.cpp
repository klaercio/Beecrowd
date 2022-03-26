#include <bits/stdc++.h>

using namespace std;

int vis[1000], cont = 1, tam;

void GRAPHdfs(int **G, int v);

int main() {
  int **G, v = 6;

  G = (int **) calloc(v, sizeof(int *));

  for (int i = 0; i < v; i++)
       G[i] = (int *) calloc(v, sizeof(int));

  G[0][4]  = 1;
  G[0][3]  = 1;
  G[4][1]  = 1;
  G[3][2]  = 1;
  G[2][5]  = 1;

  GRAPHdfs(G, v);

  for (int a = 0; a < v; a++)
    printf("%d : %d \n", vis[a], a);


  return 0;
}

void GRAPHdfsR(int **G, int vert, int v) {
  vis[vert] = cont++;

  for (int c = 0; c < v; c++)
    if (G[vert][c] && vis[c] != 1) {
      vis[c] = 1;
      tam++;
      printf("%d",c);
      if(tam < 4){
        printf("-");
        GRAPHdfsR(G, c, v);
      }
      fill_n(vis, 1000, 0);
    }
      printf("\n");
}

void GRAPHdfs(int **G, int v) {
  for (int V = 0; V < v; ++V){
    printf("%d-",V );
    vis[V] = 1;
    tam = 1;
    GRAPHdfsR( G, V, v);
  }
}
