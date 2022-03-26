#include <bits/stdc++.h>

using namespace std;

int main() {
  int V, n;
  long long soma = 0, qtd = 0;
  map <long long, int> m;

  cin >> n;
  m[0] = 1;

  while (n--) {
    cin >> V;
    soma += V;
    qtd+= m[soma]++;
  }

  cout << qtd << endl;
  return 0;
}
