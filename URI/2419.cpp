#include <bits/stdc++.h>

using namespace std;

int main() {
  int i, j, qtd = 0, m, n;

  cin >> i >> j;

  char T[i][j];

  for(m = 0; m < i; m++)
      scanf("%s",T[m]);

  for(m = 0; m < i; m++)
    for(n = 0; n < j; n++)
      if (T[m][n] == '#')
        if ((m == 0) || (n == 0) || (m == i - 1) || (n == j - 1) || (T[m][n+1] == '.') || (T[m][n-1] == '.') || (T[m+1][n] == '.') || (T[m-1][n] == '.'))
          qtd++;


  printf("%d\n",qtd);





return 0;
}
