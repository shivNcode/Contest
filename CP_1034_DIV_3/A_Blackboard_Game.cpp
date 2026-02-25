#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define rep(i, a, b) for (int i = a; i < b; i++)

void solve(int n) {
   if (n % 4 == 0) {
        cout << "Bob" << '\n';
    } else {
        cout << "Alice" << '\n';
    }
}

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
         solve(n);
    }

    return 0;
}