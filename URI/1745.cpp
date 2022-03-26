#include <bits/stdc++.h>

using namespace std;

long long contar(char *S);

int main() {
  char S[1000001], c;
  int a;
  long long cont = 0;;

  while (c != '\n') {
    a = scanf("%[0-9]", S);
    c = getchar();

    if (a)
      cont += contar(S);
  }

  printf("%lld\n", cont);

  return 0;
}

long long contar(char *S) {
  int i, soma = 0, ocor[3] = {1, 0, 0};
  long long qtd = 0;

  for (i = 0; S[i]; i++) {
    soma = (soma + (S[i] - '0') % 3) % 3;
    qtd += ocor[soma]++;
  }

  return qtd;
}
