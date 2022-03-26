#include <bits/stdc++.h>

using namespace std;

void mostra(string S);

int main() {
  string s;
  while(cin >> s)
    mostra(s);

  return 0;
}

void mostra(string S) {
  int i = 0 , x, y;
  char orientacao = 'd';
  // d, e, c, b;

  printf("300 420 moveto\n");
  printf("310 420 lineto\n");

  x = 310; y =420;

  // V = anti-horario, A = Horario
  for (i = 0; i < S.size(); i++) {
    if (S[i] == 'A' && orientacao == 'd') {
      y-=10;
      printf("%d %d lineto\n", x, y);
      orientacao = 'b';
    }else if (S[i] == 'A' && orientacao == 'e'){
      y+=10;
      printf("%d %d lineto\n", x, y);
      orientacao = 'c';
    }else if (S[i] == 'A' && orientacao == 'c') {
      x+=10;
      printf("%d %d lineto\n", x, y);
      orientacao = 'd';
    }else if (S[i] == 'A' && orientacao == 'b') {
      x-=10;
      printf("%d %d lineto\n", x, y);
      orientacao = 'e';
    }

    if (S[i] == 'V' && orientacao == 'd') {
      y+=10;
      printf("%d %d lineto\n", x, y);
      orientacao = 'c';
    }else if (S[i] == 'V' && orientacao == 'e'){
      y-=10;
      printf("%d %d lineto\n", x, y);
      orientacao = 'b';
    }else if (S[i] == 'V' && orientacao == 'c') {
      x-=10;
      printf("%d %d lineto\n", x, y);
      orientacao = 'e';
    }else if (S[i] == 'V' && orientacao == 'b') {
      x+=10;
      printf("%d %d lineto\n", x, y);
      orientacao = 'd';
    }

  }
  printf("stroke\n");
  printf("showpage\n");

}
