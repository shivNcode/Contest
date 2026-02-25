

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

int nCr(int n, int r) {
    if (r > n) return 0;
    r = min(r, n - r);
    int res = 1;
    for (int i = 1; i <= r; i++) {
        res = res * (n - r + i) / i;
        if (res > INF) return INF; // safety clamp
    }
    return res;
}

void Solve() {
    int n, k;
    cin >> n >> k;

    int val = 0;
    int temp = n;
    while (temp) {
        val++;
        temp /= 2;
    }

    int ans = 0;

    if (val <= k) ans++;
    val--;

    while (val) {
        int one = val - 1;
        int zero = 0;

        while (one >= 0) {
            int v = nCr(one + zero, one);

            if (k >= (one + val)) {
                ans += v;
                if (ans > n) ans = n; // safety
            }

            zero++;
            one--;
        }
        val--;
    }

    cout << n - ans << '\n';
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
