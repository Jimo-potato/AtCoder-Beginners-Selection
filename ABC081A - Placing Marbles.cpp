#include <bits/stdc++.h>
using namespace std;

int main() {
  string s(3, ' ');
  cin >> s;
  int a = 0;
  for (int i = 0; i < 3; i++) {
    if (s[i] == '1') {
      a += 1;
    }
  }
  cout << a << endl;
}
