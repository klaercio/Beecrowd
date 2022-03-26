#include <bits/stdc++.h>

using namespace std;

int main() {
  char nome[100];
  double a, b;

  scanf("%s", nome);
  scanf("%lf", &a);
  scanf("%lf", &b);
  printf("TOTAL = R$ %.2lf\n", a + (b * 0.15));



  return 0;
}
