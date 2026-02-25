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
        vector<int> check(n+1 , 0);
        vector<int> arr(n+1);
         vector<vector<int>> temp(n+1);
        for(int i=1;i<=n;i++){
            cin>>arr[i];
            //cout<<arr[i]<<" ";
            check[arr[i]]++;
            temp[arr[i]].push_back(i);
        }
        for(int i=1;i<=n;i++){
            if(temp[i].size()>=1){
                 for(int j = 0;j<temp[i].size();j++){
                //cout<<i<<" "<<temp[i][j]<<" ";
                //cout<<endl;

            }
            //cout<<endl;
            }

        }
        bool ans = true;

        for(int i=1;i<=n;i++){
            if(check[i]==0) continue;
            if(check[i]%i!=0){
                //cout<<check[i]<<" "<<i<<endl;
                ans = false;
                break;
            }
        }

        if(ans){
            int cnt = 1;
            vector<int> ans(n+1);
            for(int i = 1;i<=n;i++){
                if(temp[i].size()>=1){
                    int p = 1;
                    for(int j=0;j<temp[i].size();j++){
                        //cout<<"size "<<temp[i].size() - j<<endl;
                        if(p<=i){
                            //cout<<i<<" kk"<<endl;
                            ans[temp[i][j]] = cnt;
                            p++;
                        }
                        if(p>i){
                            p = 1;
                            cnt++;
                        }
                    }
                    cnt++;
                }
            }
            for(int i=1;i<=n;i++) cout<<ans[i]<<" ";
            cout<<endl;
        }
        else cout<<-1<<endl;
    }

    return 0;
}