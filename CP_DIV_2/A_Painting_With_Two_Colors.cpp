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
        int n , a , b;
        cin>>n>>a>>b;
        if(n%2==0){
            if(b%2==0){
                if(a%2==0){
                    cout<<"YES"<<endl;
                }
                else if(a<b){
                    cout<<"YES"<<endl;
                }
                else cout<<"NO"<<endl;
            }
            else cout<<"NO"<<endl;
        }
        else{
            if(b%2!=0){
                if(a%2!=0){
                    cout<<"YES"<<endl;
                }
                else if(a<b){
                    cout<<"YES"<<endl;
                }
                else cout<<"NO"<<endl;
            }
            else cout<<"NO"<<endl;
        }
    }

    return 0;
}