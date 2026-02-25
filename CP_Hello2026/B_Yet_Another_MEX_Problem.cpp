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
    int n , k;
    cin>>n>>k;
    vector<int> arr(n);
    vector<int> hash(n+1 , 0);
    // int z =0 ;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        hash[arr[i]]++;
        // if(arr[i]==0) z++;
    }
    if(hash[0]==0){
        cout<<0<<endl;
        return;
    }
    int v = k-1;
    int ans = 0;
    while(v--){
        if(hash[ans]==0){
            break;
        }
        ans++;
    }
    cout<<ans<<endl;
    // int v = n - k + 1;
    // for(int i=n;i>=0;i--){
    //     //cout<<i<<" "<<hash[i]<<" "<<v<<" "<<"\n";
    //     if(v>=hash[i]-1 && hash[i]-1>0){
    //        // cout<<"..\n";
    //         v-=(hash[i]-1);
    //         hash[i]-=(hash[i]-1);
    //     }
    // }
    // int i = n;
    // while(v>0 && i >= 0){
    //     while(v>0 && hash[i]>0){
    //         hash[i]--;
    //         v--;
    //     }
    //     i--;
    // }
    // for(int i=0;i<=n;i++){
    //     if(hash[i]==0){
    //         cout<<i<<endl;
    //         return;
    //     }
    // }
    // if(z==0){
    //     cout<<0<<endl;
    //     return;
    // }
    // sort(arr.begin() , arr.end());
    // for()


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

