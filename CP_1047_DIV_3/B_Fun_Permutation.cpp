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
        vector<int> arr(n) , ans(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
            ans[i] = n+1 - arr[i];
        }
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }

        cout<<endl;
    }

    return 0;
}