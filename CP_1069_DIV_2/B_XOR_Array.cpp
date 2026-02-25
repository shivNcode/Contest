#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ll long long
void solve() {

}

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        ll n,l,r;
        cin>>n>>l>>r;
        ll val = r-l+1;
        ll x = 1;
        ll prev = -1;
        ll sum = 0;
        for( ll i=1;i<=n;i++){
            while(x==((x-1) + (x-2))){
                x++;
            }
            if(i>=l && i<r) sum+=x;

            if(i==r) {cout<<sum<<" ";
            x = sum+1;
            }
            cout<<x<<" ";
            x++;
        }
        cout<<endl;
    }


    return 0;
}