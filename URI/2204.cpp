#include <bits/stdc++.h>

using namespace std;

int mdc(int a, int b);

int main() {
  int a, b, m, t;

  cin >> t;

  while (t--){
    cin >> a >> b;
    if (a == b)
      printf("%d\n", a);
    else {
      m = a;

      for (int i = a + 1; i <= b || m != 1; i++)
        m = mdc(m, i);


      printf("%d\n", m);
    }
  }

  return 0;
}

int mdc(int a, int b) {
  if (b == 0)
    return a;
  return mdc(b, a % b);
}
