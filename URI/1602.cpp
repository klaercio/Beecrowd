#include <bits/stdc++.h>

using namespace std;

int main() {
  int *div, i, j, n, *hip;

  div = (int*) calloc (2000001, sizeof(int));
  hip = (int*) calloc (2000001, sizeof(int));

  for (i = 2; i <= 1000000; i++)
    for (j = i + i; j < 2000001; j += i)
      div[j]++;

  hip[2] = 1;

  for (i = 3; i < 2000001; i++)
    hip[i] = hip[i-1] + !div[div[i] + 2];

  while (cin >> n)
    printf("%d\n", hip[n]);

  return 0;
}

