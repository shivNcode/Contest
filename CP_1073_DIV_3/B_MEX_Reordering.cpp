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
    int zero = 0 , one = 0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==0) zero++;
        if(arr[i]==1) one++;
    }
    if(zero==0){
        cout << "NO" <<endl;
        return;
    }
    else{
        if(zero==1){
            cout<<"YES"<<endl;
            return;
        }
        else if(one==0){
            cout << "NO"<<endl;
            return;
        }
        else {
            cout <<"YES"<<endl;
            return;
        }

    }
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

