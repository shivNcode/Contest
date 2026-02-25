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
    int one = 0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]&1) one++;
    }
    if(one==n || (arr[0]==1 && arr[n-1]==1)){
        cout<<"Alice"<<endl;
        return;
    }
    if(arr[0]==1){
        cout<<"Alice"<<endl;
        return;
    }
    if(arr[n-1]==1){
        cout<<"Alice"<<endl;
        return;
    }
    cout<<"Bob"<<endl;
    return;

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

