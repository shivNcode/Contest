// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// #define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
// #define endl '\n'
// #define all(x) (x).begin(), (x).end()
// #define rep(i, a, b) for (int i = a; i < b; i++)

// void solve() {

// }
// bool cmp(pair<string , int> &a , pair<string , int> &b){
//     return a.second<b.second;
// }
// int main() {
//     fastio;

//     int t;
//     cin >> t;
//     while (t--) {
//         string str;
//         cin>>str;
//         char ch = str[0];
//         bool check = true;
//          int n = str.size();
//         for(int i=0;i<n;i++){
//             if(n&1){
//                 check=false;
//                 break;
//             }
//             if(ch!=str[i]){
//                 check = false;
//                 break;
//             }
//         }
//         if(check){
//             vector<int> arr;
//             for(int i=1;i<n;i++){
//                 int x = n%i;
//                 if(n%i==0 && ((n/i)%2==0)){
//                     arr.push_back(i);
//                 }
//             }
//             vector<pair<string , int>> ans;
//             for(auto it:arr){
//                 string s = "";
//                 while(s.size()<n){
//                     for(int i=1;i<=it;i++){
//                         s+=ch;
//                     }
//                     for(int i=1;i<=it;i++){
//                         s+='0';
//                     }
//                 }
//                 while(s[s.size()-1]=='0'){
//                     s.pop_back();
//                 }
//                 // cout<<s<<endl;
//                 ans.push_back({s,s.size()});

//             }
//             sort(ans.begin() , ans.end() , cmp);
//             cout<<ans.size()<<endl;
//             for(auto it:ans){
//                 cout<<it.first<<" ";
//             }
//             cout<<endl;
//         }
//         else{
//             cout<<0<<endl;
//         }
//     }

//     return 0;
// }


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ll long long

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        string str;
        int z = 0;

        cin >> str;
        string copy = str;
         while(str[str.size()-1]=='0'){
            str.pop_back();
            z++;
        }
        char ch = str[0];
        bool check = true;
        int n = str.size();

        for (int i = 0; i < n; i++) {
            if (n & 1) { 
                check = false;
                break;
            }
            if (ch != str[i]) {
                check = false;
                break;
            }
        }

        if (check) {
            vector<int> arr;
            for (int i = 1; i < n; i++) {
                if (n % i == 0 && ((n / i) % 2 == 0)) {
                    arr.push_back(i);
                }
            }

            vector<ll> ans;
            for (auto it : arr) {
                string s = "";
                while ((int)s.size() < n) {
                    for (int i = 1; i <= it; i++) s += ch;
                    for (int i = 1; i <= it; i++) s += '0';
                }
                while (!s.empty() && s.back() == '0') {
                    s.pop_back();
                }
                int k = z;
                while(k>0){
                    s.push_back('0');
                    k--;
                }
                ll num = stoll(s);
                ans.push_back(num);
            }

            sort(ans.begin(), ans.end());

            cout << ans.size() << endl;
            for (auto num : ans) cout << num << " ";
            cout << endl;
        } else {
            ll temp = stoll(copy);
            if(temp%11==0){
                cout<<temp/11;
            }
            else cout<<0<<endl;
        }
    }

    return 0;
}
