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
    int n , h , l;
    cin >> n >> h >> l;
    vector<int> arr(n);
    vector<vector<int>> ans(h , vector<int>(l, 0));
    for(int i=0;i<n;i++){
        cin >> arr[i];
       // cout << arr[i] << " ";
    }
    sort(arr.begin() , arr.end());
    int a = 0;
    a = max(a , l);
    a = max(a , h);
   // cout << a <<endl;
    int i = 0;
    while(i<n && arr[i]>a){
        i++;
    }
    int j = n-1;
    while(j>=0 && arr[j]>a){
        j--;
    }
    int cnt = 0;
    int row = max(h,l);
    int col = min(h , l);
    //cout << i << " " << j << " " << row << " " << col  <<endl;
    while(i<j){
        if(arr[j]<=row && arr[i]<=col) cnt++;
        i++;
        j--;
    }
    cout <<cnt <<endl;

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
