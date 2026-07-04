#include <iostream>
using namespace std;

int main() {
    int n, h, res=0;
    cin >> n >> h;
    
    int persons_height;
    while(n--){
        cin >> persons_height;
        if(persons_height > h) res += 2;
        else res++;
    }
    cout << res;
    return 0;
}