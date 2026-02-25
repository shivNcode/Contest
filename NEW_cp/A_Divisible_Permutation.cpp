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
    cin >> n;
    int i = 1 , j = n;
    bool f = true;
    vector<int> temp;
    while(n--){
        if(f){
            f = !f;
            temp.push_back(i);
            //cout << i << " ";
            i++;
        }
        else{
            f = !f;
             temp.push_back(j);
            //cout << j << " ";
            j--;
        }
    }
    for(int i = temp.size()-1;i>=0;i--){
        cout << temp[i] << " ";
    }
    cout << endl;
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

