#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
	int sum=0, temp;
	while(n--){
		cin >> temp;
		sum += temp;
	}
	if(sum) cout << "HARD";
	else cout << "EASY";

    return 0;
}