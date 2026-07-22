#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        string s;
        cin >> n;
        cin >> s;

        int maxLen = 0, cur = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '#'){
                cur++;
                maxLen = max(maxLen, cur);
            } else {
                cur = 0;
            }
        }
        cout << (maxLen + 1) / 2 << "\n";
    }
    return 0;
}
