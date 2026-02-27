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
    int n;
    cin >> n;

    if(n == 1){
        cout << 1 << endl;
        return;
    }

    int ans = 1;

    for(int i = 2; i * i <= n; i++){
        if(n % i == 0){
            ans *= i;
            while(n % i == 0){
                n /= i;
            }
        }
    }


    if(n > 1){
        ans *= n;
    }

    cout << ans << endl;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while(t--)
    {
        Solve();
    }

    return 0;
}
