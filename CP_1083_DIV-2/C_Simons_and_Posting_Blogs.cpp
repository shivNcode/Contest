#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>
#include <random>
#include <chrono>
#include <unordered_map>
#include <unordered_set>
#include <map>
#include <stack>
using namespace std;

#define int long long
#define INF (int)1e18

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

void Solve(){

    int n;
    cin >> n;

    vector<vector<int>> a(n);

    for(int i = 0; i < n; i++){
        int l;
        cin >> l;

        vector<int> b(l);
        for(int j = 0; j < l; j++)
            cin >> b[j];

        unordered_set<int> st;

        for(int j = l - 1; j >= 0; j--){
            if(st.count(b[j]) == 0){
                a[i].push_back(b[j]);
                st.insert(b[j]);
            }
        }
    }

    vector<bool> used(n , false);
    unordered_set<int> seen;
    vector<int> ans;


    for(int step = 0; step < n; step++){

        int idx = -1;
        vector<int> best;

        for(int i = 0; i < n; i++){

            if(used[i]) continue;

            vector<int> cur;

            for(auto x : a[i]){
                if(seen.count(x) == 0)
                    cur.push_back(x);
            }

            if(idx == -1 || cur < best){
                idx = i;
                best = cur;
            }
        }

        used[idx] = true;

        for(auto x : best){
            ans.push_back(x);
            seen.insert(x);
        }
    }

    for(auto x : ans)
        cout << x << " ";
    cout << "\n";
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while(t--){
        Solve();
    }

    return 0;
}

/*
Notes:

Greedy:
- reverse each blog
- remove internal duplicates
- at each step choose blog giving lexicographically smallest new contribution

*/