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

void Solve() {
    // write solution here.
    int n;
    cin >> n;
    string str;
    cin >> str;
    vector<int> A , B;
    char one , l1 , l2;
    for(int i=0;i<str.size();i++){
        if(str[i]=='A'){
            A.push_back(i+1);
            if(i+1==1) one = 'A';
            if(i+1==n) l1 = 'A';
            if(i+1==n-1) l2 = 'A';
        }
        else{
            B.push_back(i+1);
            if(i+1==1) one = 'B';
            if(i+1==n) l1 = 'B';
            if(i+1==n-1) l2 = 'B';
        }
    }
    //cout << one << " " << l1 << " " << l2 << endl;
    if((one=='A' && l1=='A') || (one=='A' && B.size()==1) || (A.size()>1 && B.size()==1)){
        cout << "Pranathi" << endl;
    }
    else cout << "Aishwarya" << endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        Solve();
    }


    return 0;
}


/*
Notes:

*/