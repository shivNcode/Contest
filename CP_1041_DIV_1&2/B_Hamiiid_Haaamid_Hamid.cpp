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
        int n , x;
        cin>>n>>x;
        string arr;
        cin>>arr;
        int a = 0 , b = 0;
        bool check = false;
        for(int i=0;i<n;i++){
            if(arr[i]=='#') check = true;
            if(i<x-1) a++;
            if(i>x-1) b++;
        }

        int ans = 1;
        // if(a<b){
        //     for(int i=x;i>=0;i--){
        //         if(arr[i]=='#'){
        //             ans+=(i+1);
        //             break;
        //         }
        //     }
        // }
        // else{
        //     for(int i=x;i<n;i++){
        //         if(arr[i]=='#'){
        //             ans+=(arr.size()-1-i+1);
        //             break;
        //         }
        //     }
        // }
        int mini = min(a , b);
        if(check) cout<<ans + mini<<endl;
        else cout<<1<<endl;
    }

    return 0;
}