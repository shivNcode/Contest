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
    string x , y , z;
    cin >> x >> y >> z;
    string l = "";
    if(z.size()==1){
        l+="000";
        l+=z;
    }
    if(z.size()==2){
        l+="00";
        l+=z;
    }
    if(z.size()==3){
        l+="0";
        l+=z;
    }
    else l+=z;
    transform(y.begin(), y.end(), y.begin(), ::toupper);
    cout <<x<<"-"<<y<<"-"<<l<<endl;

}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while (t--) {
        Solve();
    }


    return 0;
}


/*
Notes:

*/