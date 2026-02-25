// // #include <iostream>
// // #include <vector>
// // #include <algorithm>
// // #include <deque>
// // #include <random>
// // #include <chrono>
// // #include <unordered_map>
// // #include <map>
// // #include <stack>
// // using namespace std;

// // #define int long long
// // #define INF (int)1e18

// // mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

// // void Solve() {
// //     // write solution here
// //     int s , k , m;
// //     cin>>s>>k>>m;
// //     if(k==m){
// //         int w = 0;
// //         int val;
// //         if(s==k){
// //             val = s;
// //         }
// //         else if(s>k){
// //             if((m/k)&1){
// //                 val = k;
// //             }
// //             else val = s-k;
// //         }
// //         else{
// //             val = s;
// //         }
// //         if(s>=w) cout<<val-w<<endl;
// //         else cout<<0<<endl;
// //     }
// //     else if(k>m){
// //         int w = m;
// //         int val;
// //         if(s==k){
// //             val = s;
// //         }
// //         else if(s>k){
// //             if((m/k)&1){
// //                 val = k;
// //             }
// //             else val = s-k;
// //         }
// //         else{
// //             val = s;
// //         }
// //         if(s>=w) cout<<val-w<<endl;
// //         else cout<<0<<endl;

// //     }
// //     else{
// //        // cout<<"sjsj";
// //         int w = m%k;
// //         int val;
// //         if(s==k){
// //             val = s;
// //         }
// //         else if(s>k){
// //             if((m/k)&1){
// //                 val = k;
// //             }
// //             else val = s-k;
// //         }
// //         else{
// //             val = s;
// //         }
// //         //cout<<s<<endl;
// //         if(s>=w) cout<<val-w<<endl;
// //         else cout<<0<<endl;

// //     }
// // }

// // int32_t main() {
// //     ios::sync_with_stdio(false);
// //     cin.tie(nullptr);

// //     int t = 1;
// //     cin >> t;
// //     while (t--) {
// //         Solve();
// //     }

// //     return 0;
// // }


// // /*
// // Notes:

// // */


// #include <iostream>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t;
//     if (!(cin >> t)) return 0;
//     while (t--) {
//         long long s, k, m;
//         cin >> s >> k >> m;
//         long long n = m / k;
//         long long R;
//         if (k >= s) {
//             R = s;
//         } else {
//             R = (n % 2 == 0) ? s : k;
//         }
//         long long delta = m - n * k;
//         long long ans = R - delta;
//         if (ans < 0) ans = 0;
//         cout << ans << '\n';
//     }
//     return 0;
// }

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

void Solve() {
    int s, k, m;
    cin >> s >> k >> m;

    int f = m / k;
    int val;

    if (k >= s) {
        val = s;
    } else {
        if (f & 1) val = k;
        else val = s;
    }

    int w = m - f * k;

    if (val >= w) cout << val - w << '\n';
    else cout << 0 << '\n';
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
