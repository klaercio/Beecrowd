#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, aux, aux2;
  string frase, frasecorreta;

  cin >> n;
  cin.ignore();

  for (aux = 0; aux < n ; aux++) {
    getline(cin, frase);

    for (aux2 = (frase.length()/2)-1; aux2 >= 0; aux2--)
      frasecorreta.push_back(frase[aux2]);

    for (aux2 = frase.length()-1; (aux2 >= frase.length()/2); aux2--)
      frasecorreta.push_back(frase[aux2]);

    cout << frasecorreta << endl;
    frasecorreta.clear();
  }
}

