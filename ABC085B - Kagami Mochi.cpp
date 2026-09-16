#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> d(n);
  for (int i = 0; i < n; i++) {
    cin >> d.at(i);
  }
  sort(d.rbegin(), d.rend());
  
  int maxsize = 101, res = 0;
  for (int i = 0; i < n; i++) {
    if (d.at(i) < maxsize) {
      maxsize = d.at(i);
      res++;
    }
  }
  cout << res << endl;
}

// バケット法による解
# include <iostream>
using namespace std;

int main() {
    int N;
    int d[110];
    cin >> N;
    for (int i = 0; i < N; ++i) cin >> d[i];
    
    int num[110] = {0};  // バケット
    for (int i = 0; i < N; ++i) {
        num[d[i]]++;  // d[i] が 1 個増える
    }
    
    int res = 0;  // 答えを格納
    for (int i = 1; i <= 100; ++i) {  // 1 <= d[i] <= 100 なので 1 から 100 まで探索
        if (num[i]) {  // 0 より大きかったら
            ++res;
        }
    }
    cout << res << endl;
}

// std::set を用いた解
# include <iostream>
# include <set>
using namespace std;

int main() {
    int N;
    int d[110];
    cin >> N;
    for (int i = 0; i < N; ++i) cin >> d[i];
    
    set<int> values; // insert するときに重複を取り除いてくれます
    for (int i = 0; i < N; ++i) {
        values.insert(d[i]); // 挿入します
    }
    
    // set のサイズを出力します
    cout << values.size() << endl;
}
