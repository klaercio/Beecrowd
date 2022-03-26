#include <stdio.h>
#include <stdlib.h>

unsigned long long int *fatorial;

unsigned long long int calcula(int m);

int main() {
  int m, n;

  fatorial = (unsigned long long int*) calloc (21, sizeof(unsigned long long int));
  fatorial[0] = fatorial[1] = 1;

  while (scanf("%d %d", &m, &n) != EOF){
    calcula(m);
    calcula(n);
    printf("%lld\n", fatorial[m] + fatorial[n]);
  }

  return 0;
}

unsigned long long int calcula(int m) {
  if (fatorial[m] == 0)
    fatorial[m] = m * calcula(m - 1);

  return fatorial[m];
}
