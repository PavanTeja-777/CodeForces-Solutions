#include <bits/stdc++.h>
using namespace std;

string solve() {
	string s;
	cin >> s;

    int p = s.find('0');
    s.erase(p, 1);

    p = s.find('1');
    s.erase(p, 1);

    return s;
}

int main() {
    int t;
    cin >> t;
    while (t--) {

        cout << solve() << "\n";
    }

    return 0;
}