#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        long long prefixSum = 0;
        long long threshold = 0;
        bool ok = true;
        for(int i = 0; i < n; i++){
            prefixSum += a[i];
            threshold += (i + 1);
            if(prefixSum < threshold){
                ok = false;
                break;
            }
        }
        cout << (ok ? "YES" : "NO") << "\n";
    }
    return 0;
}
