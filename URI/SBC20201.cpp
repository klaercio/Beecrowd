#include <bits/stdc++.h>

using namespace std;

void dfsr(int i);
void dfs(int i);

int n, m, IL, IR, **G, *idade, *festas, *P;

int main() {
  int cont = 0, id, gerente, anf, a;
  cin >> n >> m;

  a = n;
  G = (int**) calloc (n, sizeof(int*));
  idade = (int*) calloc(n, sizeof(int));
  festas = (int*) calloc(n, sizeof(int));
  P = (int*) calloc(n, sizeof(int));

  for (int b = 0; b < n; b++)
    G[b] = (int*) calloc(n, sizeof(int));

  while (a--) {
    cin >> id >> gerente;
    idade[cont] = id;
    G[gerente-1][cont] = G[cont][gerente-1] = 1;
    cont++;
  }

  while(m--){
    cin >> anf >> IL >> IR;
    dfs(anf-1);
  }

  for (int aux = 0; aux < n; aux++)
    printf("%3d ", festas[aux]);

  return 0;
}

void dfs(int i) {
  fill_n(P, n, 0);
  dfsr(i);
}

void dfsr(int i) {
  P[i] = 1;

  if (idade[i] >= IL && idade[i] <= IR) {
    festas[i]++;

    for (int aux = 0; aux < n; aux++)
      if (G[i][aux] == 1 && !P[aux])
        dfsr(aux);
  }
}

