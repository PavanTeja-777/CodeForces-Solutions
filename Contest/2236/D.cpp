#include<bits/stdc++.h>
using namespace std;
 
bool do_smth(auto& i, map<int, int>& mp, int k) {
    if (i->second % 2 == 0) {
        cout << "YES\n";
        return true;
    }
    if (i != mp.begin()) {
        auto prev = --i;
        i++;
        if ((i->first - prev->first) <= k) {
            cout << "YES\n";
            return true;
        }
    }
    return false;
}
 
void solve(map<int, int>& mp, int k) {
    auto i = mp.begin();
    while (i != mp.end()) {
        auto nx = ++i;
        i--;
        if (nx != mp.end()) {
            if ((nx->first - i->first) <= k) {
                i++;
            } else {
                if (!do_smth(i, mp, k)) {
                    i++;
                } else
                    break;
            }
        } else {
            if (!do_smth(i, mp, k)) {
                cout << "NO\n";
                break;
            } else
                break;
        }
    }
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, tmp, k;
        cin >> n >> k;
        map<int, int> mp;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            mp[tmp]++;
        }
        solve(mp, k);
    }
    return 0;
}