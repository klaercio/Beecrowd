#include <bits/stdc++.h>

using namespace std;

int main() {
  int p, pos, n, total = 1;

  cin >> p;

  pos = (p/2) * 2;

  while (pos != p/2) {
    pos = (pos * 2) * (pos < (p / 2)) + (1 + 2 * ((pos - p/2)- 1)) * (pos > (p/2));
    total++;
  }

  printf("%d\n", total);
  return 0;
}

/*if (pos > p/2) {
      n = pos - p/2;
      pos = 1 + 2 * (n-1);
      total++;
    }

    if (pos < p/2) {
      pos = pos * 2;
      total++;
    } */



