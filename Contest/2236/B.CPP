#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        bool isValid = true;
        for (int remin = 0; remin < k; remin++) {
            int cnt = 0;
            for (int i = remin; i < n; i += k) {
                if (s[i] == '1') cnt++;
            }
            if (cnt % 2) {
                isValid = false; break;
            }
        }

        cout << (isValid ? "Yes" : "No") << '\n';
    }

    return 0;
}