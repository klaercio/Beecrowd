#include <bits/stdc++.h>
#define MAX 1000000000

using namespace std;

long long int c, sonhos[MAX][MAX], vis[MAX] = 0;
int s;

void GRAPHdfsR(int vert, int v);
void GRAPHdfs(int v);

int main() {
  int a , b;

   while (scanf("%ld %d", c, s)){
    if (c == s && s ==0)
      goto fim;

    for (int i = 1; i < s; i++) {
      scanf("%d %d", a, b);
      sonhos[a][b] = sonhos[b][a] = 1;
    }
    GRAPHdfs(MAX);
  }


 fim:
  return 0;
}


void GRAPHdfsR(int vert, int v) {
  vis[vert] = -1;

  for (int c = 0; c < v; c++)
    if (G[vert][c] && vis[c] != 1)
      GRAPHdfsR(G, c, v);
}

void GRAPHdfs(int v) {
  for (int V = 0; V < v; ++V){
    if (vis[V] == 0)
      GRAPHdfsR( G, V, v);
  }
}
