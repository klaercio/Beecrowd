#include <bits/stdc++.h>
#define MAX 50

using namespace std;

void quantidade(int varas);

int varetas[MAX], varas, numero;

int main() {
  int n;

  scanf("%d\n", &n);

  while (n--) {
    scanf("%d", &varas);
    fill_n(varetas, MAX, 0);
    quantidade(varas);
  }

  return 0;
}

void quantidade(int varas) {
  int aux, j, i;

  for (j = 1; j != -1;) {
    for (i = 0; i < varas; i++) {
      aux = sqrt((j + varetas[i]));
      if ((pow(aux, 2) == j + varetas[i]) || varetas[i] == 0){
        varetas[i] = j;
        j++;
        i = -1;
      }
    }
    printf("%d\n", j - 1);
    j = -1;
  }
}




