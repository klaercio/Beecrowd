#include <bits/stdc++.h>

using namespace std;

typedef struct{
  int num, nivel;
}No;

int bfs(No i, int f);
vector <No> expandir(No no);
No chield (int num, int nivel);

int main() {
  int n, f;
  No i;
  cin >> n;

  while(n--) {
    scanf("%d %d", &i.num, &f);
    i.nivel = 0;
    printf("%d\n", bfs(i, f));
  }

  return 0;
}

int bfs(No i, int f) {
  map <int, bool> m;
  vector <No> fila, filhos;
  No no;

  if (i.num == f)
    return 0;

  fila.push_back(i);
  m[i.num] = 1;

  while(fila.size()) {
    no = fila.front();
    fila.erase(fila.begin());
    filhos = expandir(no);

    for (int n = 0; n < filhos.size(); n++) {
      if (filhos[n].num == f)
        return filhos[n].nivel;

      if (m[filhos[n].num] == 0){
        fila.push_back(filhos[n]);
        m[filhos[n].num] = 1;
      }
    }
  }


  return -1;
}

vector <No> expandir(No no) {
  vector <No> filhos;
  No chield1, chield2;
  int num = no.num, f = 10, inv = 0;

  chield1 = chield (no.num + 1, no.nivel + 1);

  filhos.push_back(chield1);

  while(num) {
    inv += num % 10;
    num /= 10;
    inv *= 10;
  }

  inv /= 10;
  chield2 = chield (inv, no.nivel + 1);
  filhos.push_back(chield2);

  return filhos;
}

No chield (int num, int nivel) {
  No chield;
  chield.num = num;
  chield.nivel = nivel;

  return chield;
}
