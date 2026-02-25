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
    // write solution here
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin() , arr.end());
    int k = arr[0];
    if(n>1 && arr[1]-arr[0]>=arr[0]){
        k = max(arr[1]-arr[0]  , k);
    }
    cout<<k<<endl;
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


/*
Notes:

*/


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

// int gcd(int a, int b){
//     if(b==0) return a;
//     return gcd(b, a%b);
// }

// void Solve() {
//     int n;
//     cin >> n;
//     vector<int> arr(n);
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }

//     sort(arr.begin(), arr.end());

//     int g = 0;
//     for(int i=1;i<n;i++){
//         g = gcd(g, arr[i] - arr[0]);
//     }

//     cout << arr[0] + g << endl;
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
