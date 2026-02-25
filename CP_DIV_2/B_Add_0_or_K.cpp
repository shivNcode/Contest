#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define rep(i, a, b) for (int i = a; i < b; i++)

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;  // remainder becomes new b
        a = temp;   // old b becomes new a
    }
    return a;
}

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        int n , k;
        cin>>n>>k;
        vector<long long> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        if(arr[0]==1) arr[0]+=k;
        if(n>1){
            for(int i=1;i<n;i++){
            if(arr[i]==1) arr[i]+=k;
            while(gcd(arr[i] , arr[i-1])==1){
                // cout<<arr[i]<<" "<<arr[i-1]<<endl;
                arr[i]+=k;
            }
        }
        }

        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;

    }

    return 0;
}


