#include <bits/stdc++.h>
#define tam 1000

using namespace std;

int l, c, m, n, cajueiros[tam][tam], maximo;

void floodfill();
int  floodfillR();

int main() {

  scanf("%d %d %d %d", l, c, m, n);

  for (int i = 0; i < l; i++)
    for (int j = 0; j < c; j++)
      scanf("%d", cajueiros[i][j]);

  floodfill();







  return 0;
}

