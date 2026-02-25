// // #include <iostream>
// // #include <vector>
// // #include <algorithm>
// // #include <deque>
// // #include <random>
// // #include <chrono>
// // #include <unordered_map>
// // #include <map>
// // #include <stack>
// // #include <cmath>
// // using namespace std;

// // #define int long long
// // #define INF (int)1e18

// // mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

// // void Solve() {
// //     // write solution here
// //     //double x = pow(2, 10);
// //     int n;
// //     cin>>n;
// //     vector<bool> check(pow(2 , n)-1 , false);
// //     //cout<<pow(2 , n)-1<<endl;
// //     vector<int> ans;
// //     for(int i = n;i>=1;i--){
// //         check[pow(2 , i)-1] = true;
// //        // cout<<pow(2 , i)-1<<" ";
// //         ans.push_back(pow(2 , i)-1);
// //     }
// //     for(int i = 1;i<=pow(2 , n)-1;i+=2){
// //         if(check[i]==false){
// //             ans.push_back(i);
// //             check[i] = 1;
// //         }
// //     }
// //     for(int i = 0;i<=pow(2 , n)-1;i++){
// //         if(check[i]==false){
// //             ans.push_back(i);
// //             check[i] = true;
// //         }
// //     }
// //     for(int i=0;i<ans.size();i++){
// //         cout<<ans[i]<<" ";
// //     }
// //     cout<<endl;

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
// #include <vector>
// #include <algorithm>
// #include <deque>
// #include <random>
// #include <chrono>
// #include <unordered_map>
// #include <map>
// #include <stack>
// using namespace std;

// #define int long long
// #define INF (int)1e18

// mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

// void Solve() {
//     int n;
//     cin >> n;

//     int lim = (1LL << n);

//     vector<char> check(lim, 0);
//     vector<int> ans;
//     for(int i = pow(2 , n)-1;i>pow(2 , n-1)-1;i--){
//         check[i] = 1;
//         ans.push_back(i);
//     }
//     for(int i=0;i<=pow(2 , n)-1;i++){
//         if(check[i]==0){
//             ans.push_back(i);
//         }
//     }
//     // for(int i = n; i >= 1; i--){
//     //     int val = (1LL << i) - 1;
//     //     if(val < lim){
//     //         check[val] = 1;
//     //         ans.push_back(val);
//     //     }
//     // }

//     // for(int i = 1; i < lim; i += 2){
//     //     if(!check[i]){
//     //         check[i] = 1;
//     //         ans.push_back(i);
//     //     }
//     // }

//     // for(int i = 0; i < lim; i++){
//     //     if(!check[i]){
//     //         check[i] = 1;
//     //         ans.push_back(i);
//     //     }
//     // }

//     for(int i = 0; i < ans.size(); i++){
//         cout << ans[i] << " ";
//     }
//     cout << '\n';
// }

// int32_t main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while(t--){
//         Solve();
//     }

//     return 0;
// }



#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define fastIO()                     \
        ios::sync_with_stdio(false); \
        cin.tie(nullptr)
#define ll long long
#define all(x) (x).begin(), (x).end()
#define sz(x) int((x).size())
#define nl '\n'

template <class T>
istream &operator>>(istream &is, vector<T> &v) {
        for (auto &x : v) is >> x;
        return is;
}

template <class T>
ostream &operator<<(ostream &os, const vector<T> &v) {
        for (int i = 0; i < sz(v); i++) os << v[i] << (i + 1 < sz(v) ? ' ' : '\n');
        return os;
}

// Basic bit operations
inline bool checkBit(int x, int k) {
        return (x >> k) & 1;
}

bool compare(int a, int b) {
        for (int i = 0; i < 18; ++i) {
                int A = checkBit(a, i);
                int B = checkBit(b, i);
                if (A != B) {
                        return A > B;  // the set number has priority.
                }
                if (A == 0) {
                        return a < b;
                }
        }
        return false;
}

int main() {
        fastIO();
        int t = 1;
        cin >> t;
        while (t--) {
                int n;
                cin >> n;
                vector<int> a(1 << n);
                for (int i = 0; i < (1 << n); ++i) {
                        a[i] = i;
                }

                sort(all(a), compare);
                cout << a;
        }
}

/*
Notes:

so like we have to sort it in a way that it maintains maximum possible bits on at a point of time.

if 2 bits are set then go on, if one is set and one is not set, then priority is given to the one which has it set.

if both bits are not set then that means that both of the numbers just reduces the total value, so the lexicographically smaller one should be done.

*/
