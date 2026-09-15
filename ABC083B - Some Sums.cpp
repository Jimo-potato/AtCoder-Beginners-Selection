#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, a, b;
  cin >> n >> a >> b;
  int sum = 0, c1, c10, c100, c1000, c10000;
  
  for (int i = 1; i <= n; i++) {
    c10000 = i / 10000;
    c1000 = (i % 10000) / 1000;
    c100 = (i % 1000) / 100;
    c10 = (i % 100) / 10;
    c1 = i % 10;
    int x = c1 + c10 + c100 + c1000 + c10000;
    if (a <= x and x <= b) {
      sum += i;
    }
  }
  
  cout << sum << endl;
}

/*
correct answer

# include <iostream>
using namespace std;

// 各桁の和を計算する関数
int findSumOfDigits(int n) {
  int sum = 0;
  while (n > 0) { // n が 0 になるまで
	sum += n % 10;
	n /= 10;
  }
  return sum;
}

int main() {
  int N, A, B;
  cin >> N >> A >> B;
  int total = 0;
  for (int i = 1; i <= N; ++i) {
	int sum = findSumOfDigits(i); // i の各桁の和
	if (sum >= A && sum <= B) { //  i の各桁の和が A 以上 B 以下かどうか
	  total += i;
	}
  }
  cout << total << endl;
}

*/
