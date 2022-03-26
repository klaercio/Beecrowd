#include <bits/stdc++.h>

using namespace std;

typedef struct {
  int nivel, linha, coluna;
  string id;
}No;

int Busca(No i, string f);
vector<No> expandir(No node);
No create(int linha, int coluna, int nivel);

int main() {
  string i, f;
  No p;

  while (cin >> i >> f) {
    cin.ignore();
    p.nivel = 0;
    p.linha = i[0] - 'a' + 1;
    p.coluna = i[1] - '0';
    p.id = i;
    cout <<"To get from "<< i << " to "<< f << " takes " <<Busca(p, f) <<" knight moves."<<endl;
  }



  return 0;
}

int Busca(No i, string f) {
  map <string, bool> m;
  vector <No> fila, filhos;
  No no;

  if (i.id == f)
    return 0;

  fila.push_back(i);
  m[i.id] = 1;

  while (fila.size()){
    no = fila.front();
    fila.erase(fila.begin());
    filhos = expandir(no);

    for (int n = 0; n < filhos.size(); n++) {
      if (filhos[n].id == f)
        return filhos[n].nivel;

      if (m[filhos[n].id] == 0){
        fila.push_back(filhos[n]);
        m[filhos[n].id] = 1;
      }
    }
  }

  return -1;
}

vector<No> expandir(No node) {
  vector<No> Actions;
  int row = node.linha, col = node.coluna, lvl = node.nivel + 1;
  No child;

  if (row > 2) {
    if (col > 1) {
      child = create(row-2, col-1, lvl);
      Actions.push_back(child);
    }

    if (col < 8) {
      child = create(row-2, col+1, lvl);
      Actions.push_back(child);
    }
  }

  if (col < 7) {
    if (row > 1) {
      child = create(row-1, col+2, lvl);
      Actions.push_back(child);
    }

    if (row < 8) {
      child = create(row+1, col+2, lvl);
      Actions.push_back(child);
    }
  }

  if (row < 7) {
    if (col > 1) {
      child = create(row+2, col-1, lvl);
      Actions.push_back(child);
    }

    if (col < 8) {
      child = create(row+2, col+1, lvl);
      Actions.push_back(child);
    }
  }

  if (col > 2) {
    if (row > 1) {
      child = create(row-1, col-2, lvl);
      Actions.push_back(child);
    }

    if (row < 8) {
      child = create(row+1, col-2, lvl);
      Actions.push_back(child);
    }
  }

  return Actions;
}

No create(int linha, int coluna, int nivel) {
  No c;

  c.linha = linha;
  c.coluna = coluna;
  c.nivel = nivel;
  c.id += linha + 'a' - 1;
  c.id += coluna + '0';
  return c;
}
