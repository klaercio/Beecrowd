#include <bits/stdc++.h>

using namespace std;

string infixa (string s);
string reorganiza (string s, int p);

int main() {
  int n;
  string s;

  cin >> n;

  while (n--) {
    cin >> s;
    s = infixa (s);
    cout << s << endl;
  }


return 0;
}

string infixa (string s) {
  int p = 0, i = 0, atual;
  string result;

  for (i = s.size(); i >= 0; i--) {
    if (s[i] == ')')
      p = i;
    else if(s[i] != '(')
      if (s[i-1] == ')'){
        result = reorganiza (result, p);
        result[p] == s[i];
      }
      else if (s[i-1] == '+' || s[i-1] == '-' || s[i-1] == '*' || s[i-1] == '/' || s[i-1] == '^'){
        result[i] = s[i-1];
        result[i-1] = s[i];
        i = i-2;
        cout << "Entrou aqui"<< endl;
      }
  }

  return result;
}

string reorganiza (string s, int p) {
  string result;
  int aux;

  for (aux = 0; aux <= s.size(); aux++) {
    if (aux == p)
      result[aux] = 'a';
    else
    if (aux < p)
      result[aux] = s[aux];
    else
    if (aux > p)
      result[aux] = s[aux-1];
  }


  return result;
}
