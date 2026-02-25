// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// #define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
// #define endl '\n'
// #define all(x) (x).begin(), (x).end()
// #define rep(i, a, b) for (int i = a; i < b; i++)

// void solve() {

// }

// int main() {
//     fastio;

//     int t;
//     cin >> t;
//     while (t--) {
//         long long n , q;
//         cin>>n>>q;
//         vector<long long> arr(q);
//         string str;
//         cin>>str;
//         for(long long i=0;i<q;i++){
//             cin>>arr[i];
//         }
//         vector<long long> check(1e9 + 5 , 0);
//         for(long long i=0;i<q;i++){
//         long long j = 0;

//             long long cnt = 0;
//             while(arr[i]>0 && arr[i]!=0){
//                 if(check[arr[i]]!=0){
//                     cnt+=check[arr[i]];
//                     break;
//                 }
//                 if(j==str.size()) j = 0;
//                 cnt++;
//                 if(str[j]=='A'){
//                     arr[i]--;
//                 }
//                 else{
//                     arr[i] = arr[i]/2;
//                 }

//                 j++;
//             }
//             check[arr[i]] = cnt;
//             cout<<cnt<<endl;
//         }

//     }

//     return 0;
// }



#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'
#define ll long long

void solve() {
    ll n, q;
    cin >> n >> q;
    string str;
    cin >> str;

    vector<ll> arr(q);
    for (ll i = 0; i < q; i++) cin >> arr[i];

    unordered_map<ll, ll> memo; // instead of large vector

    for (ll i = 0; i < q; i++) {
        ll x = arr[i];
        ll cnt = 0;
        ll j = 0;

        while (x > 0) {
            if (memo.count(x)) {  // check memoized
                cnt += memo[x];
                break;
            }
            if (j == str.size()) j = 0;

            cnt++;
            if (str[j] == 'A') x--;
            else x /= 2;
            j++;
        }

        memo[arr[i]] = cnt;
        cout << cnt << endl;
    }
}

int main() {
    fastio;
    int t;
    cin >> t;
    while (t--) solve();
}
