#include <bits/stdc++.h>

using namespace std;

typedef struct {
   int l, c, qtdPC, qtdpulo;
}No;

int bfs (No i, int qtdC);

char **tabuleiro;

int main() {
  int n, m, k;
  No inicial;

  while (scanf("%d %d %d", &n, &m, &k)){
    if(n == m && m == k && k ==0)
      goto final;

    inicial.qtdPC = 0;
    inicial.qtdpulo = 0;
    tabuleiro = (char**) calloc (n, sizeof(char*));

    for (int i  = 0; i < n; i++) {
      tabuleiro[i] = (char*) calloc (m, sizeof(char));
      scanf(" %s", tabuleiro[i]);

      for (int j = 0; j < m; j++)
        if (tabuleiro[i][j] == 'C'){
          inicial.l = i;
          inicial.l = j;
        }
    }

    printf("%d", bfs(inicial, k));

  }
  final:
  return 0;
}


int bfs (No i, int qtdC) {
  vector <No> fila, filhos;
  No no;

  if (qtdC == 0)
    return 0;

  fila.push_back(i);

  while(fila.size) {
    no = fila.front();
    fila.erase(fila.begin());
    filhos = expandir(no);

  }

return -1;
}

vector <No> expandir(No no) {



}
