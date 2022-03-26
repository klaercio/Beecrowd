#include <bits/stdc++.h>

using namespace std;

int main() {
  int dias, a, m, d;

  cin >> dias;

  a = dias/365;
  m = (dias - (365 * (dias/365)))/30;
  d = dias - (a*365 + m*30);
  printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", a, m, d);






  return 0;
}
