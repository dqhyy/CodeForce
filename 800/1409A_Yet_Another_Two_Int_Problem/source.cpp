#include<iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	for(int i = 0; i < t; i++){
		long long a, b;
		cin >> a >> b;
		long long r = abs(a-b);
		if(r % 10 == 0) cout << r/10 << endl;
		else {
			long long res = r / 10 + 1;
			cout << res << endl;
		}
	}
	return 0;
}