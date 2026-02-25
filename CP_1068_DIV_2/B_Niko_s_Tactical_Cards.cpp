#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'
#define ll long long

vector<unordered_map<ll,ll>> dp;

ll solve(int i, const vector<int>& a, const vector<int>& b, ll ans) {
    if (i == (int)a.size()) return ans;

    if (dp[i].count(ans)) return dp[i][ans];


    ll red = solve(i + 1, a, b, ans - a[i]);

    ll blue = solve(i + 1, a, b, (ll)b[i] - ans);

    return dp[i][ans] = max(red, blue);
}

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        dp.clear();
        dp.resize(n);

        cout << solve(0, a, b, 0LL) << endl;
    }

    return 0;
}
