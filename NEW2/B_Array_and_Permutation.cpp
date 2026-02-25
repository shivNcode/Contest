#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define int long long

void solve()
{
    int n;
    cin >> n;

    vector<int> p(n), a(n);

    for (int i = 0; i < n; i++)
        cin >> p[i];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<int> temp;
    temp.push_back(a[0]);

    for (int i = 1; i < n; i++)
    {
        if (a[i] != a[i - 1])
        {
            temp.push_back(a[i]);
        }
    }

    int i = 0, j = 0;
    int m = temp.size();

    while (i < n && j < m)
    {
        if (p[i] == temp[j])
        {
            j++;
        }
        i++;
    }

    if (j == m)
        cout << "YES\n";
    else
        cout << "NO\n";
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
