#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int res = 0, x=0, y=0, z=0, temp;
    while (n--) {
        cin >> temp;
        x += temp;
        cin >> temp;
        y += temp;
        cin >> temp;
        z += temp;
    }
    cout << ((x == 0 && y==0 && z==0) ? "YES" : "NO");
    return 0;
}