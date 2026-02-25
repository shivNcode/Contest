#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ll long long
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin>>n;
        vector<ll> arr(n);
        ll odd = 0;
        for(ll i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]&1) odd++;
        }
        if(odd>0) cout<<2<<endl;
        else{
            ll x = 0;
            for(ll i=0;i<n;i++){
                x = gcd(x , arr[i]);
            }
            for(ll i=3;i<x+2;i+=2){
                if(gcd(i,x)==1) {
                    cout<<i<<endl;
                    break;
                }
            }
        }

    }

    return 0;
}

