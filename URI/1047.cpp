#include <bits/stdc++.h>

using namespace std;

int main() {
  int Hi,Hf,Mi,Mf;

  scanf("%d %d %d %d", &Hi, &Mi, &Hf, &Mf);

  if (Mf > Mi && Hi < Hf)
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)", Hf - Hi, Mf - Mi);
  if (Mf > Mi && Hi >= Hf)
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)", 24 - Hi + Hf, Mf - Mi);
  if (Mf =< Mi && Hi >= Hf)
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)", 24 - Hi + Hf, 60 - Mi + Mf);
  if (Mf < Mi && Hi > Hf)
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)", 24 - Hi + Hf, 60 - Mi + Mf);


  return 0;
}
