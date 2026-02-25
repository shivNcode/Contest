#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ll long long

ll power(ll base, int exp) {
    ll result = 1;
    while (exp > 0) {
        if (exp & 1) result *= base;
        base *= base;
        exp >>= 1;
    }
    return result;
}

void solve() {
    ll n;
    cin >> n;
    ll ans = 0;
    int i = 18;
    while (n > 0) {
        while (power(3, i) <= n) {
            ans += (power(3, i + 1) + (i * power(3, i - 1)));
            n -= power(3, i);
        }
        i--;
    }
    cout << ans << endl;
}

int main() {
    fastio;
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
