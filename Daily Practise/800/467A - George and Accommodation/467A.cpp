#include<iostream>
using namespace std;

int main(){
    int n, res=0;
    cin >> n;

    int p, q;
    while(n--){
        cin >> p >> q;
        if(q-p >= 2) res++;
    }
    cout << res;
    return 0;
}