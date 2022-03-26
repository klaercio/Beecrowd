#include <bits/stdc++.h>
#define MAX 50000

using namespace std;

int dfs();
void dfsr(int E);

int v, e;
int **G, vis[MAX];

int main() {
  int i, j;

  cin >> v >> e;

  G = (int**) calloc (v, sizeof(int*));

  for (int a = 0; a < v; a++)
    G[a] = (int*) calloc (v, sizeof(int));

  while (e--) {
    scanf("%d %d", &i, &j);
    G[i-1][j-1] = 1;
  }

  printf("%d\n", dfs());

  return 0;
}

int dfs() {
  int qtd = 0;

  for (int i = 0; i < v; i++)
    vis[i] = 0;

  for (int aux = 0; aux < v; aux++)
    if (!vis[aux]){
      dfsr(aux);
      qtd++;
    }

  return qtd;
}

void dfsr(int E) {
  vis[E] = 1;

  for (int i = 0; i < v; i++)
    if (G[E][i] && !vis[i])
      dfsr(i);
}
