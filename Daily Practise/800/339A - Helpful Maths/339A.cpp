#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int n = (s.size() + 1) / 2;
    int low = 0, mid = 0, high = n - 1;

    while (mid <= high) {
        char &x = s[2 * mid];
        if (x == '1') {
            swap(s[2 * low], s[2 * mid]);
            low++;
            mid++;
        }
        else if (x == '2') mid++;
        else { // x == '3'
            swap(s[2 * mid], s[2 * high]);
            high--;
        }
    }
    cout << s << '\n';
}