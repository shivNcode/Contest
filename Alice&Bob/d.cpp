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

void dfs(int& cnt ,int parent , vector<vector<int>>& adj , vector<int>& vis , vector<vector<int>>& check){
    if(vis[parent]==1){
        //cout << "vapas \n";
        return;
    }
    //cout<<"new parent " << parent << " :";
    vis[parent] = 1;
    cnt++;
    for(int i =1 ;i<adj[parent].size();i++){
        if(vis[i]==0 && adj[parent][i]==1){
            check[cnt].push_back(i);
            // cout<<"child " <<parent << " "<< i << " dist " << cnt <<" \n";
            dfs(cnt , i , adj , vis , check);
        }
        //cout << endl;
    }
    cnt--;
}
void Solve() {
    // write solution here.
    int n , m;
    cin >> n >> m;
    vector<vector<int>> adj(n+1 , vector<int>(n+1));
    int a1 , a2 , a3 , a4 , a5;
    cin >> a1 >> a2 >> a3 >> a4 >> a5;
    vector<int> vis(n+1 , 0);
    for(int i=1;i<=m;i++){
        int a , b;
        cin >> a >>b;
        adj[a][b] = 1;

        adj[b][a] = 1;
    }

    map<int,string> mpp;
    mpp[a1] = "Vibhaas";
    mpp[a2] = "Shaun";
    mpp[a3] = "Pavan";
    mpp[a4] = "Vipin";
    mpp[a5] = "Jithin";
    // for(int i = 1;i<=n;i++){
    //     for(int j = 0;i<adj[j].size();j++){
    //         /cout << adj[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    int cnt = 0;
    int curr = 1;

    vector<vector<int>> check(n+1);
    dfs(cnt , curr , adj , vis , check);
    for(auto it:check){
        sort(it.begin() , it.end());
        for(auto itr:it){
            //cout << itr << " ";
            if(itr==a1 || itr==a2 || itr==a3 || itr==a4 || itr==a5){
                cout << mpp[itr] << endl;
                return;
            }
        }
        //cout << endl;
    }
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