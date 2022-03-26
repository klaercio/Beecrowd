#include <bits/stdc++.h>

using namespace std;

typedef struct {
  int a, a2, b, b2, c, c2, nivel, tam = 0;
  char *l = &L;
  char L[tam][tam];
}No;

int Bfs(No i, tam);
vector <No> expandir(No u, int tam);

int main() {
  int n;
  char c;
  No i;

  i.nivel = 0;
  scanf("%d", &n);

  while (n--) {
    scanf("%d", &i.tam);

    for (int i = 0; i < i.tam; i++) {
      for (int i = 0; i < i.tam; i++) {
        scanf(" %c", c);
        i->L[i][j] = c;
        if (c == 'A'){
          i.a = i;
          i.a2 = j;
        }
        else if (c == 'B'){
          i.b = i;
          i.b2 = j;
        }
        else if (c == 'C'){
          i.c = i;
          i.c2 = j;
        }
      }
    }
    i.L = s;
    Bfs(i);
  }
  return 0;
}

int Bfs(No i) {
  map <string, bool> m;
  vector <No> fila, filhos;
  No u;
  int i;

  fila.push_back(i);
  m[i.L] = 1;

  while (fila.size()) {
    u = fila.front();
    fila.erase(fila.begin());
    filhos = expandir(u);

    for (i = 0; i < filhos.size(); i++) {
      u = filhos.front();

      if ((u.a + u.b + u.c) == -3)
        return u.nivel;

      if (m[u.s] == 0) {
        fila.push_back(u);
        m[u.s] = 1;
      }
    }
  }

  return -1;
}

vector <No> expandir(No u) {
  vector <No> filhos;
  No aux;
  aux->L = u->L

  //cima
    if (u.a > 0 && u->L[u.a-1][u.a2] != '#' && u->L[u.a-1][u.a2] != 'X'){
      aux->L[u.a][u.a2] = 'A';
      aux->L[u.a-1][u.a2] = '#';
    }else if (u.a > 0 && u->L[u.a-1][u.a2] == 'X'){
      aux->L[u.a][u.a2] = '.';
      aux->L[u.a-1][u.a2] = '*';
    }else{

    }

  //baixo


  //direita


  //esquerda

  return filhos;
}
