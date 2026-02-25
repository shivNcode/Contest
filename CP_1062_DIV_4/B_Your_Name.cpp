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
       string s , t;
       cin>>s>>t;
    //    sort(s.begin() , s.end());
    //    cout<<s<<endl;
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    bool check = true;
    for(int i=0;i<n;i++){
        if(s[i]!=t[i]){
            cout<<"NO"<<endl;
            check = false;
            break;
        }
    }
    if(check) cout<<"YES"<<endl;
    }

    return 0;
}