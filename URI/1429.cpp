#include <bits/stdc++.h>

int main() {

  char S[6];
  int fatorial[6] = {1, 1, 2, 6, 24, 120}, total = 0, b;

  while(scanf("%s", S) && S[0] != '0') {

    total = 0;

    for (int i = strlen(S) - 1, b = 1; i >= 0;)
      total += (S[i--] - '0') * fatorial[b++];

    printf("%d\n", total);
  }

  return 0;
}


