// #include <iostream>
// #include <vector>
// #include <unordered_set>
// using namespace std;
// using ll = long long;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     if (!(cin >> t)) return 0;
//     const ll LIM = 1000000000000000000LL; // 1e18 as integer

//     while (t--) {
//         ll n;
//         cin >> n;
//         vector<ll> arr(n);
//         for (ll i = 0; i < n; ++i) cin >> arr[i];

//         unordered_set<ll> seen;
//         vector<ll> ans;
//         ans.reserve(n);


//         for (ll i = 0; i < n; ++i) {
//             if (seen.find(arr[i]) == seen.end()) {
//                 seen.insert(arr[i]);
//                 ans.push_back(arr[i]);
//             }
//         }

//         ll x = (ll)ans.size();

//         if (x == 0) {
//             cout<<0<< '\n';
//             continue;
//         }
//         if (x == 1) {
//             cout<<ans[0]<<'\n';
//             continue;
//         }
//         ll val = ((LIM - n) % x + x) % x;
//         cout<<ans[val]<<'\n';
//     }

//     return 0;
// }


#include <iostream>
#include <vector>
#include <set>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }


        set<ll> S;
        for (ll x : a) {
            S.insert(x);
        }

        while (true) {
            ll c = (ll)S.size();
            if (S.count(c)) {
                cout << c << '\n';
                break;
            }
            S.insert(c);
        }
    }

    return 0;
}
