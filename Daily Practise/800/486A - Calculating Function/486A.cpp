#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
	int res=0;
	bool minus=n%2==1;
	while(n){
		if(minus) res -= n;
		else res += n;
		minus = !minus;
		n--;
	}
	cout << res;
    return 0;
}