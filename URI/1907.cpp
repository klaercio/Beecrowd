#include <bits/stdc++.h>

using namespace std;

int cores = 0, l, c;
char cenario[1030][1030];

void dfs ();
void dfsr (int i, int j);

int main() {
  int i;

  scanf("%d %d", &l, &c);

  for (i = 0; i < l; i++){
    scanf(" %s", cenario[i]);
  }

  dfs();
  printf("%d\n", cores);
  return 0;
}

void dfs(){
  int i, j;

  for (i = 0; i < l; i++)
    for (j = 0; j < c; j++)
      if (cenario[i][j] == '.') {
        dfsr(i, j);
        cores++;
      }
}

void dfsr(int i, int j){

  if (i > 0 && cenario[i-1][j] == '.') {
    dfsr(i-1, j);
    cenario[i-1][j] = '+';
  }

  if (i < l - 1 && cenario[i+1][j] == '.') {
    dfsr(i+1, j);
    cenario[i+1][j] = '+';
  }

  if (j < c - 1 && cenario[i][j+1] == '.') {
    dfsr(i, j+1);
    cenario[i][j+1] = '+';
  }

  if (j > 0 && cenario[i][j-1] == '.') {
    dfsr(i, j-1);
    cenario[i][j-1] == '+';
  }
}
