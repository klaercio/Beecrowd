#include <bits/stdc++.h>

using namespace std;

int main() {
  int t, n;

  unsigned long long int *fatorial;

  fatorial = (unsigned long long int*) calloc (61, sizeof(unsigned long long int));

  fatorial[0] = 0;
  fatorial[1] = fatorial[2] = 1;

  for (int i = 3; i < 61; i++) {
    fatorial[i] = fatorial[i-1] + fatorial[i-2];
  }
  scanf("%d", &t);

  while (t--) {
    scanf("%d", &n);
    printf("Fib(%d) = %llu\n", n, fatorial[n]);
  }


  return 0;
}
