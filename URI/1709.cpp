#include <bits/stdc++.h>
#define MAX 100001

using namespace std;

int main() {
  int V[MAX], p, total = 1, aux, ind, i, V2[MAX];

  cin >> p;

  for (i = 1; i <= p; i++)
    V[i] = i;

  while (true) {
    for (i = 1; i <= p/2; i++)
      V2[i * 2] = V[i];

    for (aux = (p/2) + 1, ind = 1; aux <= p; aux++, ind+=2)
      V2[ind] = V[aux];

    total++;

    if (V2[p/2] == p/2) {
      printf("%d", total - 1);
      return 0;
    }

    for (i = 1; i <= p/2; i++)
      V[i * 2] = V2[i];

    for (aux = (p/2) + 1, ind = 1; aux <= p; aux++, ind+=2)
      V[ind] = V2[aux];

    total++;

    if (V[p/2] == p/2) {
      printf("%d", total - 1);
      return 0;
    }
  }

  return 0;
}

