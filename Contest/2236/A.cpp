#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int mini = INT_MAX, maxi = INT_MIN;
        for (int i = 0; i < n; i++) {
            int height;
            cin >> height;
            mini = min(mini, height);
            maxi = max(maxi, height);
        }
        cout << maxi - mini + 1 << '\n';
    }

    return 0;
}