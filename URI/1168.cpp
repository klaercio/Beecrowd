#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
  int n,aux,qtd,teste,aux2;
  int vet[10] = {6,2,5,5,4,5,6,3,7,6};
            //   0,1,2,3,4,5,6,7,8,9
  string s;

  cin>>n;

  for (aux = 0; aux < n ; aux++) {
    cin>>s;
    qtd = teste = 0;

    while (s[teste]) {
      aux2 = s[teste++] - '0';
      qtd += vet[aux2];
    }
    cout <<qtd <<" leds" <<endl;
  }
}

