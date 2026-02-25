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
//     // write solution here
//     int n;
//     cin>>n;
//     vector<int> arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int maxi = 0;

//     int idx = 0;
//     for(int i=1;i<n-1;i++){
//         if((arr[i]>arr[i+1] && arr[i]>arr[i-1]) || (arr[i]<arr[i+1] && arr[i]<arr[i-1])){
//             int val = max(abs(arr[i]-arr[i+1]) , abs(arr[i]-arr[i-1]));
//             //cout<<arr[i]<<" "<<val<<endl;
//             if(val>maxi){
//                 maxi = val;
//                 idx = i;
//             }
//         }
//     }
//     if(n>1){
//         int val = abs(arr[0] - arr[1]);
//         if(val>maxi){
//                 maxi = val;
//                 idx = 0;
//             }
//         val = abs(arr[n-1] - arr[n-2]);
//         if(val>maxi){
//                 maxi = val;
//                 idx = n-1;
//         }
//     }
//     vector<int> temp;
//     //cout<<'\n';
//     for(int i=0;i<n;i++){
//         if(i!=idx){
//             //cout<<arr[i]<<" ";
//             temp.push_back(arr[i]);
//         }
//     }
//    // cout<<'\n';
//     int sum = 0;
//     sum = 0;
//     //cout<<idx<<endl;
//     for(int i=0;i<temp.size()-1;i++){
//         //cout<<abs(arr[i] - arr[i+1])<<" ";
//         sum+=abs(temp[i] - temp[i+1]);
//     }
//    cout<<sum<<endl;
// }

// int32_t main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t = 1;
//     cin >> t;
//     while (t--) {
//         Solve();
//     }

//     return 0;
// }


// /*
// Notes:

// */


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
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    int base = 0;
    for (int i = 0; i + 1 < n; i++) {
        base += abs(arr[i] - arr[i + 1]);
    }

    int best = 0;

    best = max(best, abs(arr[0] - arr[1]));
    best = max(best, abs(arr[n - 1] - arr[n - 2]));

    for (int i = 1; i + 1 < n; i++) {
        int cur = abs(arr[i - 1] - arr[i]) + abs(arr[i] - arr[i + 1]) - abs(arr[i - 1] - arr[i + 1]);
        best = max(best, cur);
    }

    cout << base - best << endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        Solve();
    }
    return 0;
}
