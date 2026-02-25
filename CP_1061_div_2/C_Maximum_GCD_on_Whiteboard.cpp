

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define rep(i, a, b) for (int i = a; i < b; i++)




vector<pair<int,int>> countFrequencies(const vector<int> &arr) {
    vector<pair<int,int>> result;
    if(arr.empty()) return result;

    int count = 1;
    for(int i = 1; i < arr.size(); i++) {
        if(arr[i] == arr[i-1]) {
            count++;
        } else {
            result.push_back({arr[i-1], count});
            count = 1;
        }
    }
    // push last element count
    result.push_back({arr.back(), count});
    return result;
}
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}



int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        int n  , k;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr.begin() , arr.end());
        vector<pair<int,int>> freq = countFrequencies(arr);
        vector<int> prr(2*1e5 + 5);
        vector<int> freq2(2*1e5 + 5);
        int prev = 0;
        for(int i=0;i<freq.size();i++){
            prr[freq[i].first] = prev + freq[i].second;
            prev = prr[freq[i].first];
            freq2[freq[i].first] = freq[i].second;
        }
        if(prr[0]>k){
            cout<<1<<endl;
        }
        else{
            k-=prr[0];
            int ans = arr[0];
            for(int i=1;i<n;i++){
                ans = gcd(ans , arr[i]);
            }
            cout<<ans<<endl;
            int start = 1;
            if(freq[0].first!=1) start = 0;
            for(int i=start;i<freq.size();i++){
                int v = freq[i].first;
                int c = 2*v;
                cout<<v<<" "<<c<<endl;
                cout<<prr[v]<<" "<<prr[c]<<" "<<freq2[c]<<endl;
                cout<<endl;
                if(((prr[c] - freq2[c]) - prr[v])<=k && ((prr[c] - freq2[c]) - prr[v])>=0){
                    ans = max(ans , v);
                }
            }
            cout<<ans<<endl;
        }
    }

    return 0;
}