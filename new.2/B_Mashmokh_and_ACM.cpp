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
    int mod = 1e9 + 7;
    int n , k;
    cin >> n >> k;
    vector<vector<int>> fact(n+1);
    //sare factor calculate krr liye
    for(int i =1;i<=n;i++){
        for(int j = 1;j*j<=i;j++){
            if(i%j==0){
                fact[i].push_back(j);
                if((i/j)!=j) fact[i].push_back(i/j);
            }
        }
    }
    vector<vector<int>> dp(k+1 , vector<int>(n+1 , 0));
    // for(int i =1;i<=n;i++){
    //     cout << i <<" : ";
    //     for(int f:fact[i]){
    //         cout << f << " ";
    //     }
    //     cout << endl;
    // }
    //initial Dp
    for(int i=1;i<=n;i++){
        dp[1][i] = 1;
    }
    //dp part
    for(int i=2;i<=k;i++){
        for(int j = 1;j<=n;j++){
            dp[i][j] = 0;
            for(int f:fact[j]){
                dp[i][j] = (dp[i][j] + dp[i-1][f])%mod;
            }
        }
    }
    int ans = 0;
    for(int i =1;i<=n;i++){
        ans = (ans + dp[k][i])%mod;
    }
    cout << ans << endl;


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

    Mashmokh and ACM – Dynamic Programming Explanation

    This is a very nice DP problem. At first glance, it looks like a DP problem,
    and that intuition is correct. Let's understand the idea step by step.

    ------------------------------------------------
    Problem Summary:
    ------------------------------------------------
    - We have numbers from 1 to N.
    - We need to form a sequence of length K.
    - The sequence must be non-decreasing.
    - Each element must divide the next one:
        b[i] | b[i+1]

    ------------------------------------------------
    Observations with Small K:
    ------------------------------------------------

    Case 1: K = 1
    - Any number from 1 to N can form a valid sequence.
    - Answer = N

    Case 2: K = 2
    - Fix the last element (position 2) as x.
    - The first element must be a divisor of x.
    - So for each x, count how many divisors it has.

    Case 3: K = 3
    - Fix the last element (position 3) as x.
    - Position 2 must be a divisor of x.
    - Position 1 must be a divisor of the element at position 2.
    - This shows that each step depends on the previous one.

    ------------------------------------------------
    Dynamic Programming Definition:
    ------------------------------------------------

    Let:
        dp[i][j] = number of good sequences of length i
                   ending with the value j

    ------------------------------------------------
    DP Transition:
    ------------------------------------------------
    - To form a sequence of length i ending at j,
      the previous element must be a factor of j.

    Formula:
        dp[i][j] = sum(dp[i-1][f])
                   for all f such that f divides j

    ------------------------------------------------
    Final Answer:
    ------------------------------------------------
    - Sum all sequences of length K:
        dp[K][1] + dp[K][2] + ... + dp[K][N]

    - Take modulo (1e9 + 7)

    ------------------------------------------------
    Why this works:
    ------------------------------------------------
    - Fixing the last element simplifies the problem.
    - Divisibility naturally leads to factor-based transitions.
    - Constraints allow an O(K * N * log N) solution.
*/

