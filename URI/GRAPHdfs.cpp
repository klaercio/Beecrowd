#include <bits/stdc++.h>

int vis[1000], cont = 1, qtdE = 1,vetAux[1000] = {0};

void GRAPHdfs(int **G, int v);
void GraphShow(int **G, int v);

int main() {
  int **G, v , n, e, l, j;

  scanf("%d", &n);

  for (int a = 1; a <= n; a++) {
    scanf("%d %d", &v, &e);

    G = (int **) calloc(v, sizeof(int *));

    for (int i = 0; i < v; i++)
      G[i] = (int *) calloc(v, sizeof(int));

    while(e--){
      scanf("%d %d", &l, &j);
      G[l][j] = 1;
      vetAux[l]++;
    }

    printf("Caso %d:\n", a);
    //GraphShow(G,v);
    GRAPHdfs(G, v);
  }


 // for (int a = 0; a < v; a++)
   // printf("%d : %d \n", vis[a], a);


  return 0;
}

void GRAPHdfsR(int **G, int vert, int v) {
  vis[vert] = cont++;

  for (int c = 0; c < v; c++)
    if (G[vert][c] && vis[c] == -1) {
      for (int u = 1; u <= qtdE; u++)
        printf("  ");

      printf("%d-%d pathR(G,%d)\n", vert, c, c);
      qtdE++;
      GRAPHdfsR(G, c, v);
    }else if(G[vert][c] && vis[c] != -1){
      for (int u = 1; u <= qtdE; u++)
        printf("  ");

      printf("%d-%d\n", vert, c);
    }
      qtdE--;
}

void GRAPHdfs(int **G, int v) {

  for (int c = 0; c < v; c++)
     vis[c] = -1;

  for (int V = 0; V < v; ++V)
      if (vis[V] == -1){
         GRAPHdfsR( G, V, v);
         qtdE++;
         if (vetAux[V] != 0)
           printf("\n");
      }

}

void GraphShow(int **G, int v) {
  int i, j;
  for ( i = 0; i < v; i++)
    for ( j = 0; j < v; j++)
      if (G[i][j] == 1)
        printf("%d-%d\n", i, j);
}
