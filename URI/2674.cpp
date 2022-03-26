#include <bits/stdc++.h>

using namespace std;

int main() {
  int i, j, *prim, numero = 0, aux = 0, p;
  char n[7];

  prim = (int*) calloc (100001, sizeof(int));
  prim[0] = prim[1] = 1;

  for (i = 2; i < 317; i++)
    if (!prim[i])
      for (j = i + i; j < 100001; j += i)
        prim[j] = 1;

  while (scanf(" %s", n) != EOF) {
    for (i = 0; n[i]; i++){
      if (prim[n[i] - '0'])
        aux = 1;

      numero = numero * 10 + (n[i] - '0');
    }

    p = prim[numero] == 0;

    if (!p)
      printf("Nada\n");
    else
      if (aux == 0)
        printf("Super\n");
      else
        printf("Primo\n");

    aux = numero = 0;
  }

  return 0;
}
