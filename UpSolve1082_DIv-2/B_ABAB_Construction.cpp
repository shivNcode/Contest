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
    string x;
    cin >> x;
    char turn;
    if(n&1){
        turn = 'a';
        int a = 0 , b = 0;
        for(int i=0;i<n;i++){
            if(x[0]=='b'){
                cout << "NO\n";
                return;
            }
            if(x[i]=='a')a++;
            else if(x[i]=='b')b++;
            if(i<n-1 && x[i]==x[i+1] && turn==x[i]){
                if(x[i]=='a') turn = 'b';
                else turn = 'a';
            }
            else if(i<n-1 && x[i]==x[i+1] && turn!=x[i]){
                cout << "NO\n";
                return;
            }
        }
        //cout << a << " " << b;
        if(a<=(n/2)+1 && b<=n/2){
            cout << "YES\n";
            return;
        }
        else{
            cout << "NO\n";
            return;
        }
    }
    else{
        if(x[0]=='a') turn = 'b';
        turn  = 'b';
        int a = 0 , b = 0;
        for(int i=0;i<n;i++){
            if(x[i]=='a')a++;
            else if(x[i]=='b')b++;
            if(i<n-1 && x[i]==x[i+1] && turn==x[i]){
                if(x[i]=='a') turn = 'b';
                else turn = 'a';
            }
            else if(i<n-1 && x[i]==x[i+1] && turn!=x[i]){
                cout << "NO\n";
                return;
            }
        }
       // cout << a << " " << b;
        if(a<=(n/2) && b<=n/2){
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