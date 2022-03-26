#include <bits/stdc++.h>
#define TAM 51

using namespace std;

int n, m;
char mapa[TAM][TAM];

void contamination();
void contaminationR(int i, int j);

int main() {

  while (scanf("%d %d", &n, &m)){
    if (n == m  && m == 0)
      goto fim;

    for (int i = 0; i < n; i++)
      scanf(" %s", mapa[i]);

    contamination();

    for (int i = 0; i < n; i++)
      printf("%s\n", mapa[i]);

    printf("\n");

  }
  fim:

  return 0;
}

void contamination() {
    int i, j;

  for (i = 0; i < n; i++)
    for (j = 0; j < m; j++)
      if (mapa[i][j] == 'T') {
        contaminationR(i, j);
      }
}

void contaminationR(int i, int j) {
  if (i > 0 && mapa[i-1][j] == 'A'){
    mapa[i-1][j] = 'T';
    contaminationR(i-1, j);
  }

  if (i < n - 1 && mapa[i+1][j] == 'A' ){
    mapa[i+1][j] = 'T';
    contaminationR(i+1, j);
  }

  if (j < m - 1 && mapa[i][j+1] == 'A'){
    mapa[i][j+1] = 'T';
    contaminationR(i, j+1);
  }

  if (j > 0 && mapa[i][j-1] == 'A'){
    mapa[i][j-1] = 'T';
    contaminationR(i, j-1);
  }
}

