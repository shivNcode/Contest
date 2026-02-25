
#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>
#include <random>
#include <chrono>
#include <unordered_map>
#include <map>
#include <stack>
#include <queue>
using namespace std;

#define int long long
#define INF (int)1e18

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

void Solve() {
    int n, k;
    cin >> n >> k;

    if (n == k) {
        cout << 0 << '\n';
        return;
    }

    unordered_map<int, int> mpp;
    queue<int> q;

    q.push(n);
    int tt = 0;

    while (!q.empty()) {
        int s = q.size();
        tt++;

        for (int i = 0; i < s; i++) {
            int val = q.front();
            q.pop();

            int n1 = val / 2;
            int n2 = val - n1;

            if (mpp.find(n1) == mpp.end()) {
                mpp[n1] = tt;
                q.push(n1);
            }
            if (mpp.find(n2) == mpp.end()) {
                mpp[n2] = tt;
                q.push(n2);
            }
        }
    }

    if (mpp.find(k) == mpp.end()) cout << -1 << '\n';
    else cout << mpp[k] << '\n';
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) Solve();

    return 0;
}

/*
notes:

*/