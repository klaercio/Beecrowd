#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, lado;
  float area;

  scanf("%d", &n);

  while (n--) {
    scanf("%d", &lado);
    area = (5 * pow(lado, 2))/ 4 * sqrt(3 * sqrt(5));
    printf("%.3f", area);

  }

  return 0;
}
