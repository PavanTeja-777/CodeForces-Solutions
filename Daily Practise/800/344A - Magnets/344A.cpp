#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
	int res=1;
	string prev, neww;
	cin >> prev;
	n--;
	while(n--){
		cin >> neww;
		if(prev!=neww) res++;
		prev = neww;
	}
	cout << res;
    return 0;
}