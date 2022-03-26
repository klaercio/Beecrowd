#include <bits/stdc++.h>

using namespace std;

int main() {
  string dolares;
  int centavos, tam, a;

  while (cin >> dolares && cin >> centavos) {
    tam = dolares.size()/3;
    cout << "$";
    a = dolares.size() % 3;
    cout << dolares.substr(0, a);

    if (a == 0 && tam) {
      cout << dolares.substr(a, 3);
      a = 3;
      tam -= 1;
    }

    for (int i = 0; i < tam; i++) {
      cout << "," << dolares.substr(a,3);
      a+=3;
    }
    printf(".%02d", centavos);

    cout << endl;
  }

  return 0;
}
