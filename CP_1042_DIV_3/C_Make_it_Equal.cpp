// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <set>
// using namespace std;

// #define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
// #define endl '\n'
// #define all(x) (x).begin(), (x).end()
// #define rep(i, a, b) for (int i = a; i < b; i++)

// void solve() {

// }

// int main() {
//     fastio;

//     int t;
//     cin >> t;
//     while (t--) {
//         int n , k;
//         cin>>n>>k;
//         vector<pair<int , int>> a1(n);
//         multiset<int> ms;
//         int x ;
//         for(int i =0 ;i<n;i++){
//             cin>>a1[i].first;
//         }
//         for(int i=0;i<n;i++){
//             cin>>x;
//             x%=k;
//             ms.insert(x%k);
//         }

//         // for(auto it:a1) cout<<it.first<<" ";
//         // // cout<<a1.size();
//         // cout<<endl;


//         for(int i =0 ;i<n;i++){
//             x = a1[i].first;
//             a1[i].first = x%k;

//             while(x>=k){
//                 x-=k;
//             }
//             x = abs(x - k);

//             a1[i].second = x%k;
//         }
//         bool check = true;
//         for(int i=0;i<n;i++){
//             if(ms.find(a1[i].first)==ms.end() && ms.find(a1[i].second)==ms.end()){
//                 cout<<"NO"<<endl;
//                 check = false;
//                 break;
//             }
//             else if(ms.find(a1[i].first)!=ms.end()){
//                 ms.erase(ms.find(a1[i].first));
//             }
//             else if(ms.find(a1[i].second)!=ms.end()){
//                  ms.erase(ms.find(a1[i].second));
//             }
//         }
//         // for(int i=0;i<n;i++) cout<<a1[i].first<<" ";
//         //  for(auto it : ms) cout<<it<<" ";
//         if(check) cout<<"YES"<<endl;
//     }

//     return 0;
// }



#include <iostream>
#include <vector>
#include <set>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fastio;
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<pair<int, int>> a1(n);
        multiset<int> ms;
        int x;


        for (int i = 0; i < n; i++) {
            cin >> a1[i].first;
        }


        for (int i = 0; i < n; i++) {
            cin >> x;
            ms.insert(x % k);
        }


        for (int i = 0; i < n; i++) {
            int rem1 = a1[i].first % k;
            int rem2 = (k - rem1) % k;
            a1[i].first = rem1;
            a1[i].second = rem2;
        }

       
        bool possible = true;
        for (int i = 0; i < n; i++) {
            if (ms.find(a1[i].first) != ms.end()) {
                ms.erase(ms.find(a1[i].first));
            } else if (ms.find(a1[i].second) != ms.end()) {
                ms.erase(ms.find(a1[i].second));
            } else {
                possible = false;
                break;
            }
        }

        cout << (possible ? "YES" : "NO") << "\n";
    }
}
