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
    int n;
    cin >> n;
    vector<int> arr(n);
    pair<int,int> maxi = {0,0};
    for(int i=0;i<n;i++){
        cin >> arr[i];
        if(arr[i]>=maxi.first){
            maxi.first = arr[i];
            maxi.second = i;
        }
    }
    swap(arr[0] , arr[maxi.second]);
    for(int i=0;i<n;i++) cout << arr[i] << " " ;
    cout << "\n";
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