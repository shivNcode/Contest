// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// #define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
// #define endl '\n'
// #define all(x) (x).begin(), (x).end()
// #define rep(i, a, b) for (int i = a; i < b; i++)
// #define ll long long
// void solve() {

// }

// int main() {
//     fastio;

//     int t;
//     cin >> t;
//     while (t--) {
//         ll n , k;
//         cin>>n>>k;
//         vector<ll> arr(n);
//         vector<ll> check(k+1 , 0);
//         for(ll i=0;i<n;i++){
//             cin>>arr[i];
//             check[arr[i]] = 1;
//         }
//         vector<ll> temp(k+1 , 0);
//         sort(arr.begin() , arr.end());
//         vector<ll> ans;
//         bool got = false;
//         for(ll i=0;i<n;i++){
//             if(temp[arr[i]]) continue;
//             ll val = arr[i];
//             while(val<=k){
//                 if(check[val]==0){
//                     cout<<-1<<endl;
//                     got = true;
//                     break;
//                 }
//                 temp[val] = 1;
//                 val+=arr[i];
//             }
//             if(got) break;
//             ans.push_back(arr[i]);
//         }
//         if(!got){
//             cout<<ans.size()<<endl;
//         for(int i=0;i<ans.size();i++){
//             cout<<ans[i]<<" ";
//         }
//         cout<<endl;
//         }


//     }

//     return 0;
// }

#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map> // Added for map
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ll long long
void solve() {

}

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        ll n , k;
        cin>>n>>k;
        vector<ll> arr(n);


        unordered_map<ll, int> check;

        for(ll i=0;i<n;i++){
            cin>>arr[i];
            check[arr[i]] = 1;
        }


        unordered_map<ll, int> temp;

        sort(arr.begin() , arr.end());
        vector<ll> ans;
        bool got = false;
        for(ll i=0;i<n;i++){
            if(temp[arr[i]]) continue;
            ll val = arr[i];
            while(val<=k){
               
                if(check.count(val) == 0){
                    cout<<-1<<endl;
                    got = true;
                    break;
                }
                temp[val] = 1;
                val+=arr[i];
            }
            if(got) break;
            ans.push_back(arr[i]);
        }
        if(!got){
            cout<<ans.size()<<endl;
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        }


    }

    return 0;
}