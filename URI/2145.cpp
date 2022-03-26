#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m, dn = 0, dm = 0, i, j;

  while (scanf("%d %d", &n, &m)) {
    if (n == m && m == 0)
      goto final;
    if (n > m)
      for (i = 1; i < n/2; i++){
        if (n % i == 0)
          dn+= i;
        if (m % i == 0 && m != i)
          dm+= i;
    }
    if (n < m)
      for (i = 1; i < m/2; i++){
        if (n % i == 0 && n != i)
          dn+= i;
        if (m % i == 0)
          dm+= i;
      }
    if ((m % dn == 0 && n % dm == 0) && (dn != dm))
      printf("Friends and lovers <3\n");
    if (dn == dm)
      printf("Almost lovers!\n");
    if (m % dn == 0 && n % dm !=0)
      printf("%d friendzoned %d!\n", m, n);
    if ((m % dn != 0 && n % dm == 0) && (dn != dm))
      printf("%d friendzoned %d!\n", n, m);

    dn = dm = 0;
  }

  final:
  return 0;
}
