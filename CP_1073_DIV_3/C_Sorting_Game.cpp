#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int pos1 = -1, pos0 = -1;

        // find first '1'
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                pos1 = i;
                break;
            }
        }

        // find first '0' after that '1'
        if (pos1 != -1) {
            for (int i = pos1 + 1; i < n; i++) {
                if (s[i] == '0') {
                    pos0 = i;
                    break;
                }
            }
        }

        // if no valid move
        if (pos1 == -1 || pos0 == -1) {
            cout << "Bob\n";
        } else {
            cout << "Alice\n";
            cout << 2 << "\n";
            cout << pos1 + 1 << " " << pos0 + 1 << "\n";
        }
    }

    return 0;
}
