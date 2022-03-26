#include <bits/stdc++.h>

int main(){
  long int n = 1000000, cont, b = 2, aux, divisores, hiperprimos, c, ate;

      cont = 0;
      while( n != 1){
        if (n % b == 0){
          cont++;
          n = n / b;
        }else{
          b++;
          aux = aux * (cont + 1);
          cont = 0;
        }
      }

      aux = aux * (cont + 1);


      printf("%d", aux);





return 0;
}
