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
int f(int a, int b) {
    return (a + b - 1) / b;
}


void Solve() {
    // write solution here
    int n , x;
    cin >> n >> x;
    vector<int> temp;
    int maxi = 0;
    for(int i=0;i<n;i++){
        int a , b , c;
        cin >> a >> b >>c;
        x-=((b-1)*a);
        if((a*b - (c))>0){
           maxi = max(maxi ,(a*b - (c)) );
        }
        // else{

        // }
    }
    //cout << maxi << " " << x << endl;
    if(x<=0){
        cout << 0 << endl;
    }
    else if(maxi==0){
        cout << -1 << endl;
    }
    else {
        cout << f(x , maxi)  << endl;
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

