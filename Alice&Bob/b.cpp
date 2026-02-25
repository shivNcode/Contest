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
    // write solution here.
    string s;
    cin >> s;
    int t1 = 0 , t2 = 0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1') t1++;
        else t2++;
    }
    int v = min(t1 , t2);
    if(v%2==0){
        cout << "Srimoney" << endl;
    }
    else cout << "Sarah" << endl;

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