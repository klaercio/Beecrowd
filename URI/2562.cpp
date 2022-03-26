#include <bits/stdc++.h>

using namespace std;

bool V[1000];
int cont;
map<int, vector<int>> G;

void dfs(int ini);

int main() {
  int ve, e, i, w, v, ini;

  while (scanf("%d %d", &ve, &e) != EOF) {
    cont = 0;

    for (i = 0; i < e; i++){
      scanf("%d %d", &w, &v);
      G[w-1].push_back(v-1);
      G[v-1].push_back(w-1);
      V[w-1] = V[v-1] = 0;
    }

    scanf("%d", &ini);
    dfs(ini-1);
    printf("%d\n", cont);
    G.clear();
  }

  return 0;
}

void dfs(int ini) {
  int i;

  cont++;
  V[ini] = 1;

  for (i = 0; i < G[ini].size(); i++)
    if (!V[G[ini][i]])
      dfs(G[ini][i]);
}
