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
    int x , y;
    cin >> x >> y;
    int temp = 0;
    if(y>0){
        temp+=(y*2);
        temp = x - temp;
        if(temp>=0 && temp%3==0){
            cout << "YES\n";
            return;
        }
        else{
            cout << "NO\n";
            return;
        }
    }
    else if(y<0){
        temp+=((-y)*4);
        temp = x - temp;
        if(temp>=0 && temp%3==0){
            cout << "YES\n";
            return;
        }
         else{
            cout << "NO\n";
            return;
        }
    }
    else{
        temp = x;
        if(temp>=0 && temp%3==0){
            cout << "YES\n";
            return;
        }
         else{
            cout << "NO\n";
            return;
        }
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