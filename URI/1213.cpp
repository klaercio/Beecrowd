#include <bits/stdc++.h>

typedef long long llint;

using namespace std;

int main() {
  llint n, m, qt;


  while (cin >> n) {
    m = qt = 1;

    while (m % n) {
      m = m % n;
      m = m * 10 + 1;
      qt++;
    }

    cout << qt << endl;
  }

  return 0;
}
