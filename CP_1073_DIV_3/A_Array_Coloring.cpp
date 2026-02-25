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
    vector<pair<int,char>> arr(n);
    char c = 'R';
    for(int i=0;i<n;i++){
        cin>>arr[i].first;
        arr[i].second = c;
        if(c=='R') c = 'B';
        else c = 'R';
    }
    sort(arr.begin() , arr.end());
    char ch = arr[0].second;
    for(int i=1;i<n;i++){
        if(ch==arr[i].second){
            cout << "NO"<<endl;
            return;
        }
        ch = arr[i].second;
    }
    cout << "YES" <<endl;
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

