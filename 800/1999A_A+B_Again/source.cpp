#include<iostream>

using namespace std;

int main(){
	int T;
	cin >> T;
	for(int t = 0; t < T; t++){
		int n;
		cin >> n;
		int sum = n/10 + n%10;
		cout << sum << endl;
	}

	return 0;
}