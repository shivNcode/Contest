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
        ll a , b;
        cin>>a>>b;
        if(a%2!=0 && b%2!=0){
            cout<<a*b + 1<<endl;
        }
        else if(b%2==0){
            if((((a*b)/2) + 2)%2==0)
                cout<<((a*b)/2) + 2<<endl;
            else cout<<-1<<endl;
        }
        else cout<<-1<<endl;
    }

    return 0;
}