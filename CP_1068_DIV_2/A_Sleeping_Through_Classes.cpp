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
        int n , k;
        cin>>n>>k;
        string str;
        cin>>str;
        int cnt = 0;
        int i = 0;
        int j = -1;
        while(i<n){
            //cout<<str[i]<<" ";
            if(str[i]=='1'){
                j = i+(k);
            }
            else if(str[i]=='0' && i<=j){
            }
            else{
                cnt++;
            }
            i++;
        }
        cout<<cnt<<endl;


    }

    return 0;
}