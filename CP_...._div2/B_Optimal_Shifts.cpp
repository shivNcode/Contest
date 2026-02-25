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

// int main() {
//     fastio;

//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin>>n;
//         string str;
//         cin>>str;
//         int d = 0;
//         int cnt = 0;
//         for(int i=0;i<n;i++){
//             if(str[i]=='1') cnt++;
//         }
//         while(cnt!=n){
//             cnt = 0;
//             char last = str[n-1];
//             for(int i=n-1;i>=0;i--){
//                 if(str[i]=='1') cnt++;
//                 if(i==0 && last=='1' && str[0]=='0'){
//                     str[0] = '1';
//                     break;
//                 }
//                 if(str[i-1]=='1' && str[i]=='0'){
//                     str[i] = '1';
//                 }
//             }
//             if(cnt==n) break;
//             d++;
//         }
//         cout<<d<<endl;

//     }

//     return 0;
// }


// #include <iostream>
// #include <vector>
// #include <string>
// #include <algorithm>

// using namespace std;

// #define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
// #define endl '\n'

// void solve() {
//     int n;
//     cin >> n;
//     string str;
//     cin >> str;

//     // Store indices of all '1's
//     vector<int> ones_indices;
//     for (int i = 0; i < n; i++) {
//         if (str[i] == '1') {
//             ones_indices.push_back(i);
//         }
//     }

//     // Edge Case: If there are no '1's, it will never fill (unless problem guarantees solvable)
//     // If the problem guarantees at least one '1', this check isn't strictly needed
//     // but prevents crashes on empty vector access.
//     if (ones_indices.empty()) {
//         // Output logic depends on problem statement for "impossible" case.
//         // Assuming typical CP problem constraints where at least one 1 exists:
//         cout << n << endl; // or potentially infinite
//         return;
//     }

//     int max_gap = 0;

//     // Calculate gaps between adjacent '1's inside the string
//     for (size_t i = 0; i < ones_indices.size() - 1; i++) {
//         int current_gap = ones_indices[i+1] - ones_indices[i] - 1;
//         max_gap = max(max_gap, current_gap);
//     }

//     // Calculate the circular gap (Distance from last '1' to first '1' wrapping around)
//     // Formula: (Zeros after last 1) + (Zeros before first 1)
//     int zeros_after_last = (n - 1) - ones_indices.back();
//     int zeros_before_first = ones_indices.front();
//     int circular_gap = zeros_after_last + zeros_before_first;

//     max_gap = max(max_gap, circular_gap);

//     cout << max_gap << endl;
// }

// int main() {
//     fastio;
//     int t;
//     cin >> t;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }


#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)

int main() {
    fastio;
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;


        vector<int> pos;
        for (int i = 0; i < n; ++i) {
            if (s[i] == '1') pos.push_back(i);
        }

        if (pos.empty()) {

            cout << -1 << '\n';
            continue;
        }

        if ((int)pos.size() == n) {

            cout << 0 << '\n';
            continue;
        }


        int maxGap = 0;
        for (int i = 0; i + 1 < (int)pos.size(); ++i) {
            int gap = pos[i+1] - pos[i] - 1;
            if (gap > maxGap) maxGap = gap;
        }

        int wrapGap = (pos.front() + n) - pos.back() - 1;
        if (wrapGap > maxGap) maxGap = wrapGap;

        cout << maxGap << '\n';
    }
    return 0;
}
