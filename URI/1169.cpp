#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, q;
  unsigned long long int qtd;

  scanf("%d", &n);

  while (n--){
    scanf("%d", &q);
      qtd = pow(2,q);
      if (q < 64)
        printf("%lld kg\n", qtd/12000);
      else
        printf("%lld kg\n", 1537228672809129);
  }


  return 0;
}
