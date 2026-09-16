#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, Y;
  cin >> n >> Y;
  
  int x = -1;
  int y = -1;
  int z = -1;
  for (int i = 0; i <= n; i++) {
    for (int j = 0; j <= n - i; j++) {
      int sum = 5000 * i + 1000 * j;
      int a10000 = Y - sum;
      int k = n - i - j;
      
      if (10000 * k == a10000) {
        x = k;
        y = i;
        z = j;
        goto end;
      }
    }
  }
  
  end:
  cout << x << " " << y << " " << z << endl;
}

// correct answer
# include <iostream>
using namespace std;

int main() {
    int N, Y;
    cin >> N >> Y;
    int res10000 = -1, res5000 = -1, res1000 = -1;
    for (int a = 0; a <= N; ++a) {  // 10000円の枚数を 0 〜 N で調べる
        for (int b = 0; b + a <= N; ++b) {  // 5000円の枚数を 0 〜 N-a で調べる
            int c = N - a - b;  // 1000円の枚数は決まる
            int total = 10000*a + 5000*b + 1000*c;
            if (total == Y) {  // 答えが見つかったら
                res10000 = a;
                res5000 = b;
                res1000 = c;
            }
        }
    }
    
    // 答えを出力 (見つかっていなくても -1 -1 -1 になるので OK です)
    cout << res10000 << " " << res5000 << " " << res1000 << endl;
}
