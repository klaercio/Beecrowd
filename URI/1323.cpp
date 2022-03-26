#include <iostream>

using namespace std;

int main() {
  int n, i, ant = 0, now;

  cin >> n;

  for  (i = 0; i < n; i++) {
    now = (i+1)*(i+1)+ant;
    ant = now;
  }

  cout << now;
}
