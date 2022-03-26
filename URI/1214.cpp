#include <bits/stdc++.h>
#define maximo 1000

using namespace std;

int main() {
  double c, n, total = 0, media[maximo], med, qtd = 0;
  double percent;
  int a, b;

  scanf("%f", &c);

  while (c--){
    scanf("%lf", &n);

    for (a = 0; a < n; a++){
      scanf("%lf", &media[a]);
      total = total + media[a];
    }

    med = total / n;

    for (b = 0; b < n; b++)
      if (media[b] > med)
        qtd++;

    percent = (qtd / n) * 100;

    printf("%.3lf%\n", percent);

    qtd = 0;
    total = 0;
  }


  return 0;
}
