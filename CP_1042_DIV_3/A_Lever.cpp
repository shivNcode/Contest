#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define rep(i, a, b) for (int i = a; i < b; i++)

void solve() {

}

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<int> a1(n) , a2(n);
        for(int i=0;i<n;i++) cin>>a1[i];
        for(int i=0;i<n;i++) cin>>a2[i];
        int ans = 1;
        for(int i=0;i<n;i++){
            if(a1[i]>a2[i])
                ans+=(a1[i] - a2[i]);
        }
        cout<<ans<<endl;
    }

    return 0;
}