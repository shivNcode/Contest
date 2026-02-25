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
        vector<int> arr(n), odd , even;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]&1) odd.push_back(arr[i]);
            else even.push_back(arr[i]);
        }
        sort(even.begin() , even.end() , greater<int>());
        sort(odd.begin() , odd.end() , greater<int>());
        if(even.size()==n){
            for(int i=0;i<n;i++){
                cout<<0<<" ";
            }
        }
        else if(odd.size()==n){
            for(int i=0;i<n;i++){
                if(i%2==0) cout<<odd[0]<<" ";
                else cout<<0<<" ";
            }
        }
        else{
            for(int i=1;i<even.size();i++){
                even[i]+=even[i-1];
            }
            //for k = 1;
            cout<<odd[0]<<" ";
            int e = even.size() , o = odd.size();
            for(int k = 2;k<n;k++){
                if(e+1>=k){
                    cout<<odd[0] + even[k-2]<<" ";
                }
                else{
                    if(k%2==0){
                        cout<<odd[0] + even[e-2]<<" ";
                        //else cout<<0<<" ";
                    }
                    else{
                        cout<<odd[0] + even[e-1]<<" ";
                        //else cout<<0<<" ";

                    }
                }
            }
            if(o%2==0 && o>1 ) cout<<0<<" ";
            else{
                cout<<odd[0]+even[e-1]<<" ";
            }
        }
        cout<<endl;

    }

    return 0;
}

