#include <bits/stdc+++.h>
#define MAX 100000

using namespace std;

int sonhos[MAX] = {0}, pos[MAX] = {-1};
int c, s, a, b;
bool sera = false;

void inseresonho(int a, int b);

int main() {
  while (scanf("%d %d", c, s)){
    if (c == s && s ==0)
      goto fim;

    scanf("%d %d", a, b);
    sonhos[0] = a;
    pos[a] = 0;
    sonhos[1] = b;
    pos[b] = 1;

    for (int i = 1; i < s; i++) {
      scanf("%d %d", a, b);
      inseresonho(a,b);

    }
  }
  fim:
  return 0;
}

void inseresonho(int a, int b) {
  if (pos[a] == 0){
    if(sonhos[pos[a+1]] == -1){
      sonhos[pos[a+1]] = b;
    }else if sonhos[pos[s-1]] == -1{
      sonhos[pos[s-1]] = b
    }else{
      sera = false;
      return;
    }
  }else if (pos[a] != -1){
    if (pos[a] < s - 1){
      if(sonhos[pos[a+1]] == -1){
        sonhos[pos[a+1]] = b;
      }else if (sonhos[pos[a-1]]== -1){
        sonhos[pos[a-1]] = b
      }else{
        sera = false;
        return;
      }
    }
  }else if (pos[b] != -1){
    if (pos[b] < s - 1){
      if(sonhos[pos[b+1]] == -1){
        sonhos[pos[b+1]] = a;
      }else if (sonhos[pos[b-1]]== -1){
        sonhos[pos[b-1]] = a
      }else{
        sera = false;
        return;
      }
    }
  }else if (pos[a] == s-1){
    if(sonhos[pos[0]] == -1){
      sonhos[pos[0]] = b;
    }else if sonhos[pos[a-1]] == -1{
      sonhos[pos[a-1]] = b
    }else{
      sera = false;
      return;
    }







}
