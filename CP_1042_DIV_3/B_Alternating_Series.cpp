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
        vector<int> arr(n);
        if(n==2){
            cout<<-1<<" "<<2<<endl;
        }
        else{
            for(int i=0;i<n;i++){
                if(i&1) arr[i] = 3;
                else arr[i] = -1;
            }
             if(n%2==0) arr[n-1] = 2;
            for(auto it:arr) cout<<it<<" ";
            cout<<endl;
        }


    }

    return 0;
}


// #include <iostream>
// #include <vector>
// using namespace std;

// void solve() {
//     int n;
//     cin >> n;
//     vector<int> arr(n);
//     if (n == 2) {
//         arr = {2, -1};
//     } else if (n == 3) {
//         arr = {2, -1, 2};
//     } else if (n % 2 == 0) {
//         for (int i = 0; i < n; i += 2) {
//             arr[i] = 2;
//             if (i + 1 < n) arr[i + 1] = -1;
//         }
//     } else {
//         for (int i = 0; i < n; i += 2) {
//             arr[i] = 2;
//             if (i + 1 < n) arr[i + 1] = -1;
//         }
//     }
//     for (int num : arr) {
//         cout << num << " ";
//     }
//     cout << endl;
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin >> t;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }