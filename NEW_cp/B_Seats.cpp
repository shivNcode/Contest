#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>
#include <random>
#include <chrono>
#include <unordered_map>
#include <map>
#include <stack>
using namespace std;

#define int long long
#define INF (int)1e18

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
int ans = 0;
void f(string &s) {
    int cnt = 0;
    //int ans = 0;
    for (char c : s) {
        if (c == '0') {
            cnt++;
        } else {
            if (cnt > 0) {
                //cout << cnt << " ";
                ans+=((cnt + 3 -1)/3);
                cnt = 0;
            }
        }
    }

    if (cnt > 0) {
        //cout << cnt
        ans+=((cnt + 3 -1)/3);
    }
    cout << ans << endl;
}

void Solve() {
    int n;
    cin >> n;
    ans = 0;
    string str;
    cin >> str;

    string newStr = str;

    for (int i = 0; i < n; i++) {
        if (str[i] == '1') {
            ans++;
            newStr[i] = '1';
            if (i - 1 >= 0) newStr[i - 1] = '1';
            if (i + 1 < n)  newStr[i + 1] = '1';
        }
    }

    f(newStr);
}


int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        Solve();
    }

    return 0;
}


/*
Notes:

*/

