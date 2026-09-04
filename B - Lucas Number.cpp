#include <bits/stdc++.h>
using namespace std;

int64_t Lucas_Number(int n) {
  int64_t a[86];
  a[0] = 2;
  a[1] = 1;
  
  if (n == 0) {
    return 2;
  }
  if (n == 1) {
    return 1;
  }
  
  for (int i = 2; i <= n; i++) {
    a[i] = a[i - 1] + a[i - 2];
  }
  return a[n];
}

int main() {
  int N;
  cin >> N;
  
  cout << Lucas_Number(N) << endl;
}
