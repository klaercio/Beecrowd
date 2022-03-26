#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main() {
  string s = "abcabckdjhjdkd";

  regex self_regex("^(abc){2}");

  if (regex_search(s, self_regex))
    cout << "Contem\n";
  else
    cout << "Não\n";

  return 0;
}
