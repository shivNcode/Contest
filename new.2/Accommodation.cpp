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
    int b , g , x , y , n;
    cin >> b >> g >> x >> y >> n;

    int boys = b/x;
    int girl = g/y;
    if(boys<=girl){
        int rooms = b/x;
        int bleft = b%x;
        int gleft = g%y;
        gleft+=girl-boys;
        int leftspace = rooms*(n-x-y);
        int people = bleft + gleft;
        

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
