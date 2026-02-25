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

void Solve()
{
    // write solution here.
    int p , q;
    cin >> p >> q;
    if(p<q){
        int val = q - p;
        //cout << val << endl;
        if(p>=(2*val) && q>=(3*val) && ((p - (2*val))==(q - (3*val)))){
            cout << "Bob\n";
            return;
        }
        else{
            cout <<"Alice\n";
            return;
        }
    }
    else{
        cout << "Alice\n";
        return;
    }

}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--)
    {
        Solve();
    }

    return 0;
}

/*
Notes:

*/

