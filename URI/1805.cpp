#include <stdio.h>

using namespace std;

int main() {
  unsigned long long int a, b, total;

  scanf("%lld %lld", &a, &b);
  total = ((a+b)*(b - a + 1))/2;
  printf("%lld\n", total);

  return 0;
}
