#include <bits/stdc++.h>

using namespace std;

int main() {
  int S[] = {3, 4, 6, 8, 14, 15, 16, 17, 21, 25, 26, 27, 30, 31, 40, 41, 42, 43}, tam = sizeof(S)/ sizeof(int), dif[tam-1], M1 = 0, M2 = 0, M3 = 0;

  for (int i = 0; i < tam - 1; i++) {
    dif[i] = S[i+1] - S[i];
  }

  for (int i = 0; i < tam - 1; i++)
    printf("%d ", dif[i]);


  for (int i = 0; i < tam - 1; i++)
    if (dif[i] > dif[M1]){
      M1 = i;
    }
  dif[M1] = -1


  printf("\nm1 %d m2 %d m3 %d", M1, M2, M3);




  return 0;
}
