


// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <queue>
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
//         priority_queue<pair<int , pair<int ,int>>> pq;
//         int n , k , x;
//         cin>>n>>k>>x;
//         vector<int> arr(n);
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//         }
//         sort(arr.begin(),arr.end());

//         // if(arr[0]!=0 && arr[n-1]!=x && x>arr[n-1]){
//         //     arr.resize(n+2);
//         //     arr.push_back(0);
//         //     arr.push_back(x);
//         //     size+=2;
//         // }
//         // else if(arr[0]!=0){
//         //     arr.resize(n+1);
//         //     arr.push_back(0);
//         //     size++;
//         // }
//         // else if(arr[n-1]!=x && x>arr[n-1]){
//         //     arr.resize(n+1);
//         //     arr.push_back(x);
//         //     size++;
//         // }
//         if(arr[0] != 0) arr.push_back(0);
//         if(arr[n-1] != x && x > arr[n-1]) arr.push_back(x);
//         sort(arr.begin(), arr.end());
//         int size = arr.size();

//         sort(arr.begin() , arr.end());
//         for(int i=0;i<size;i++) cout<<arr[i]<<" ";
//         for(int i=0;i<size-1;i++){
//             pq.push({arr[i+1] - arr[i] - 1 , {arr[i] , arr[i+1]}});
//         }
//         while(!pq.empty()){
//             auto it = pq.top();
//             int mid = (it.second.first + it.second.second)/2;
//             if(it.first==0){
//                 cout<<it.second.first<<" ";
//                 pq.pop();
//             }else{
//                 cout<<mid<<" ";
//                 pq.pop();
//                 pq.push({mid - it.second.first - 1 , {it.second.first , mid}});
//                 pq.push({it.second.second - mid - 1 , {mid , it.second.first}});
//             }

//         }
//         cout<<endl;

//     }

//     return 0;
// }


#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <utility>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        int n, k, x;
        cin >> n >> k >> x;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];

        sort(arr.begin(), arr.end());


        if (arr[0] != 0) arr.push_back(0);
        if (arr.back() != x && x > arr.back()) arr.push_back(x);

        sort(arr.begin(), arr.end());
        int size = arr.size();



        // for(int val:arr) cout<<val<<" ";
        // cout<<endl;


        priority_queue<pair<int, pair<int, int>>> pq;

        for (int i = 0; i < size - 1; i++) {
            int gap = arr[i + 1] - arr[i] - 1;
            pq.push({gap, {arr[i], arr[i + 1]}});
        }
        while (!pq.empty() && k>0) {
            auto it = pq.top();
            pq.pop();

            int left = it.second.first;
            int right = it.second.second;
            int gap = it.first;

            if(gap==0){
                cout<<left<<" ";
            }
            else{
                int mid = (left + right) / 2;
                cout<<mid<<" ";



                pq.push({mid - left - 1, {left, mid}});

                pq.push({right - mid - 1, {mid, right}});
            }

            k--;
        }
        if(k>0){
            cout<<max(x , arr[arr.size()-1])<<" ";
        }
        cout << endl;
    }

    return 0;
}
