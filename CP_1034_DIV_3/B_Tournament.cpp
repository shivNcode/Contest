#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define rep(i, a, b) for (int i = a; i < b; i++)

void solve(int n, int j, int k ,vector<int>& arr) {
    int val = arr[j-1];
    sort(arr.begin() , arr.end());
    if(val==arr[n-1]){
        cout<<"YES"<<'\n';
    }
    else{
        if(k==1) cout<<"NO"<<'\n';
        else cout<<"YES"<<'\n';
    }


}

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        int n,j , k;
        cin>>n>>j>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        solve(n , j ,k ,arr);
    }

    return 0;
}