#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a.at(i);
  }
  sort(a.rbegin(), a.rend());
  
  int Alice = 0, Bob = 0;
  for (int i = 0; i < (n / 2); i++) {
    Alice += a.at(2 * i);
    Bob += a.at(2 * i + 1);
  }
  if (n % 2 == 1) {
    Alice += a.at(n - 1);
  }
  cout << Alice - Bob << endl;
}

/*
correct answer

int N, A[101];
//---------------------------------------------------------------------------------------------------
void _main() {
    cin >> N;
    rep(i, 0, N) cin >> A[i];
    sort(A, A + N, greater<int>());
 
    int v[2] = {0, 0};
    rep(i, 0, N) v[i % 2] += A[i];
 
    int ans = v[0] - v[1];
    cout << ans << endl;
}
*/
