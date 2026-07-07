#include <bits/stdc++.h>
using namespace std;

int solve(int a, int b, int x){
    if(b>a) return solve(b, a, x);
    if(a==b) return 0;
    return min(1+solve(a/x, b, x), a-b);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, x;
        cin >> a >> b >> x;
        cout << solve(a, b, x) << '\n';
    }
    return 0;
}