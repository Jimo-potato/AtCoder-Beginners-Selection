# include <iostream>
# include <string>
# include <algorithm>
using namespace std;

string divide[4] = {"dream", "dreamer", "erase", "eraser"};

int main() {
    string S;
    cin >> S;
 
    // 後ろから解くかわりにすべての文字列を「左右反転」する
    reverse(S.begin(), S.end());
    for (int i = 0; i < 4; ++i) reverse(divide[i].begin(), divide[i].end());
    
    // 端から切っていく
    bool can = true;
    for (int i = 0; i < S.size();) {
        bool can2 = false; // 4 個の文字列たちどれかで divide できるか
        for (int j = 0; j < 4; ++j) {
            string d = divide[j];
            if (S.substr(i, d.size()) == d) { // d で divide できるか
                can2 = true;
                i += d.size(); // divide できたら i を進める
            }
        }
        if (!can2) { // divide できなかったら
            can = false;
            break;
        }
    }
    
    if (can) cout << "YES" << endl;
    else cout << "NO" << endl;
}

#include <iostream>
#include <vector>
#include <string>
using namespace std;

// 分割したい文字列たち
const vector<string> strs = {"dream", "dreamer", "erase", "eraser"};

int main() {
    string S;
    cin >> S;
    
    vector<bool> dp(S.size()+1, false);
    dp[0] = true;
    for (int i = 1; i <= S.size(); ++i) {
        // 4 つの文字列を順に試していく
        for (auto str: strs) {
            if (i >= str.size() &&
                dp[i - str.size()] &&
                S.substr(i - str.size(), str.size()) == str) {
                dp[i] = true;
            }
        }
    }

    if (dp[S.size()]) cout << "YES" << endl;
    else cout << "NO" << endl;
}
