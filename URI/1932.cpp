#include <bits/stdc++.h>

using namespace std;

bool bigger (int i);

int *V;

int main() {
  int n, multa, comprei = 0, total = 0, i = 0, qtd = 0;

  cin >> n >> multa;

  V = (int*) calloc (n, sizeof(int));

  for (int i = 0; i < n; i++)
    cin >> V[i];

  comprei = V[0];

  aqui:
  while (V[i+1] < V[i] && i < n) {
    comprei = V[i+1];
    i++;
  }

  for (i; i < n; i++) {
    whilee:
    while (V[i+1] >= V[i] && i < n) {
      i++;
    }
    if (V[i]- comprei > multa) {
      total+= (V[i] - comprei) * (V[i] > comprei);
      qtd+= V[i] > comprei;
      goto aqui;
    }else {
      i++;
      goto whilee;
    }

  printf ("%d\n", total - multa * qtd);

  return 0;
}

bool bigger (int i) {


  return false;
}
