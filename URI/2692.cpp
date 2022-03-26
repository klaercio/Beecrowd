#include <bits/stdc++.h>

using namespace std;

int main() {
  int L, F;
  char a, b;
  string frase, newfrase;
  map <char, char> m;

  cin >> L >> F;

  while (L--) {
    cin >> a >> b;
    m[a] = b;
    m[b] = a;
  }

  while (F--) {
    cin >> frase;

    for (int i = 0; i < frase.size(); i++) {
      newfrase[i] = frase[i];
      if (m[frase[i]] != '') {
        newfrase[i] = m[frase[i]];
      }
    }
    printf("%s", newfrase);
  }


  return 0;
}
