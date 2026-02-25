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
    int n , m;
    cin >> n >> m;
    vector<int> arr(m);
    int maxi = 0;
    for(int i=0;i<m;i++){
        cin >> arr[i];
        maxi = max(maxi,arr[i]);
    }
    bool peak = false;
    int v = arr[0];
    for(int i = 0;i<m-1;i++){
        if(arr[i] >= arr[i+1]){
            peak = true;
            break;
        }
    }
    //cout << maxi <<endl;
    if(peak) cout << 1 << endl;
    else{
        cout << n - maxi + 1 << endl;
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

