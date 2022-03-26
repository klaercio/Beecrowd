#include <bits/stdc++.h>

using namespace std;

typedef struct {
  int canal, nivel;
}No;

map <int, bool> m;

int bfs(No o, int f);
vector <No> expandir(No o, int f);

int main() {
  int d, q, canal, val;
  No o;

  o.nivel = 0;

  while (scanf("%d %d %d", &o.canal, &d, &q)) {
    if ((o.canal + d + q )== 0)
      goto aqui;
    for (int i = 0; i < q; i++){
      scanf("%d", val);
      m[val] = 1;
    }
    printf("%d\n", bfs(o, d));
    m.clear();
  }
  aqui:
  return 0;
}

int bfs(No o, int f) {
  vector<No> fila, filhos;

  if (o.canal == f)
    return 0;

  fila.push_back(o);
  m[o.canal] = 1;

  while (fila.size()) {
    o = fila.front();
    fila.erase(fila.begin());
    filhos = expandir(o, f);

    for (int n = 0; n < filhos.size(); n++) {
      if (filhos[n].canal == f)
        return filhos[n].nivel;

      if (m[filhos[n].canal] == 0){
        fila.push_back(filhos[n]);
        m[filhos[n].canal] = 1;
      }
    }
  }

return -1;
}

vector <No> expandir(No o, int f) {
  vector <No> filhos;
  No chield;

  if (o.canal <= f*3) {
    chield.canal = o.canal*3;
    chield.nivel = o.nivel + 1;
    filhos.push_back(chield);
  }

  if (o.canal <= f*2) {
    chield.canal = o.canal*2;
    chield.nivel = o.nivel + 1;
    filhos.push_back(chield);
  }

  if(o.canal % 2 == 0){
    chield.canal = o.canal/2;
    chield.nivel = o.nivel + 1;
    filhos.push_back(chield);
  }

  chield.canal = o.canal - 1;
  chield.nivel = o.nivel + 1;
  filhos.push_back(chield);

  chield.canal = o.canal + 1;
  chield.nivel = o.nivel+ 1;
  filhos.push_back(chield);

  return filhos;
}
