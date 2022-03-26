#include <bits/stdc++.h>

using namespace std;

typedef map<int, vector<int>> Lista;
map<int, bool> vis;
map<int, bool>::iterator it;

void dfs(int i);

Lista L;
int qtd;

int main() {
  int a, w, v;

  while(scanf("%d", &a) && a) {
    while (a--){
      scanf(" (%d,%d)", &w, &v);
      L[w].push_back(v);
      L[v].push_back(w);
      vis[w] = vis[v] = 0;
    }

    qtd = 0;
    dfs(1);
    printf("%d\n", qtd);
    L.clear();
  }

  return 0;
}

void dfs(int i) {
  qtd++;
  vis[i] = 1;

  for (int j = 0; j < L[i].size(); j++)
    if (vis[L[i][j]] == 0)
      dfs(L[i][j]);
}

