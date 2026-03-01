#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>
#include <random>
#include <chrono>
#include <unordered_map>
#include <map>
#include <stack>
using namespace std;

#define int long long
#define INF (int)1e18

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

struct Node {
    int val;
    Node *left, *right;
    Node(int v) {
        val = v;
        left = right = NULL;
    }
};

Node* buildCartesianTree(vector<int>& arr) {
    int n = arr.size();
    stack<Node*> st;

    for (int i = 0; i < n; i++) {
        Node* curr = new Node(arr[i]);
        Node* last = NULL;

        while (!st.empty() && st.top()->val > arr[i]) {
            last = st.top();
            st.pop();
        }

        curr->left = last;

        if (!st.empty()) {
            st.top()->right = curr;
        }

        st.push(curr);
    }

    // Bottom element is root
    while (st.size() > 1)
        st.pop();

    return st.top();
}




void Solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    buildCartesianTree
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while (t--)
    {
        Solve();
    }

    return 0;
}

/*
Notes:

*/