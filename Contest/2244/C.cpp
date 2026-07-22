#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, x, y;
		cin >> n >> x >> y;
		vector<int> a(n);
		for(int i=0; i<n; i++) cin >> a[i];
		bool sorted = true;
		for(int i=1;i<n; i++){
			if(a[i] < a[i-1]) {
				sorted = false;
				break;
			}
		}
		if(sorted) cout << "YES\n";
		else{
			if(x%2==0 && y%2==0) cout << "NO\n";
			else cout << "YES\n";
		}
	}
	return 0;
}
