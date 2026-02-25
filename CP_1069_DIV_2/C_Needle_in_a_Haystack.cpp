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

    int tc;
    cin >> tc;
    while (tc--) {
        string s ,t;
        cin>>s>>t;
        vector<int> count(26 , 0);
        for(int i=0;i<t.size();i++){
            count[t[i] - 'a']++;
        }
        // for(int i=0;i<26;i++){
        //     cout<<char(i+'a')<<" "<<count[i]<<endl;
        // }
        bool check = false;
        for(int i=0;i<s.size();i++){
            char ch =s[i];
            count[ch-'a']--;
            if(count[ch-'a']<0) check = true;
        }
        if(check){
            cout<<"Impossible"<<endl;
            continue;
        }

        // for(int i=0;i<26;i++){
        //     cout<<char(i+'a')<<" "<<count[i]<<endl;
        // }
        int i = 0 , j = 0;
        string ans = "";
        while(i<26){
            //cout<<char(i+'a')<<endl;
            while(count[i]){
                char ch = char(i+'a');
                if(count[i] && j<s.size() && s[j]<=ch){
                    ans+=s[j];
                    j++;
                }
                else if(count[i]){
                    ans+=ch;
                    count[i]--;
                }
            }
            i++;
        }
        while(j<s.size()){
            ans+=s[j];
            j++;
        }
        cout<<ans<<endl;

    }

    return 0;
}