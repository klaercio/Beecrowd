#include <bits/stdc++.h>

using namespace std;

int main() {
  double a, b, c, delta;

  scanf("%lf %lf %lf", &a, &b, &c);

  delta = pow(b, 2) - (4 * a * c);

  if (delta < 0 || a == 0)
    printf ("Impossivel calcular\n");
  else
    printf ("R1 = %.5lf \nR2 = %.5lf\n",(-b + sqrt(delta))/(2*a), (-b - sqrt(delta))/(2*a)) ;

  return 0;
}
