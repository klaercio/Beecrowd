#include <bits/stdc++.h>

using namespace std;

void isprim(int m);

int main() {
  int t, m;

  cin >> t;

  while (t--) {
    cin >> m;
    isprim(m);
  }

  return 0;
}

void isprim(int m) {
  int i, qtd = 1;

  for (i = 2; i <= sqrt(m); i++) {
    if (m % i == 0) {
      printf("Not Prime\n");
      return;
    }
  }
  printf("Prime\n");

}
