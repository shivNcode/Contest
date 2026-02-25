#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define rep(i, a, b) for (int i = a; i < b; i++)
void solve(int n , vector<int>& arr) {
    vector<int> mini(n , 0);
    vector<int> maxi(n , 0);
    int i = 0;
    int r = n-1;
    int minii = 1e9;
    int maxii = -1e9;
    while(i<n){
        minii = min(minii , arr[i]);
        mini[i] = minii;
        maxii = max(maxii , arr[r]);
        maxi[r] = maxii;
        r--;
        i++;
    }
    string str = "";
    for(int i=0;i<n;i++){
        if(arr[i]==mini[i] || arr[i]==maxi[i]){
            str+="1";
        }
        else{
            str+="0";
        }
    }
    cout<<str<<'\n';

}

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        int n = 0;
        cin>>n;
        vector<int> arr(n);
        for(int i = 0;i<n;i++){
            cin>>arr[i];
        }
        solve(n,arr);
    }

    return 0;
}







/*
bool check(int i , vector<int>& arr){
    int t = i-1;
    bool right = true;
    bool left = true;
    while(t>=0){
        if(arr[t]<arr[i]) left = false;
        t--;
    }
    t = i+1;
    while(t<=arr.size()-1){
        if(arr[t]>arr[i]) right = false;
        t++;
    }
    return left||right;
}
void solve(int n , vector<int>& arr) {
    string ans = "1";
    for(int i=1;i<=n-2;i++){
        if(check(i , arr)){
            ans+="1";
        }
        else{
            ans+="0";
        }
    }
    ans+="1";
    cout<<ans<<'\n';
}

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        int n = 0;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        solve(n , arr);
    }

    return 0;
}
*/