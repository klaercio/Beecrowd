#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  unsigned long long int s;

  scanf("%d", &n);

  while (n--){
    scanf("%lld", &s);

    s = (-1 + sqrt(1 - (4 * 1 * -(s*2)))) /2 ;

    printf("%lld\n", s);

  }



  return 0;
}
