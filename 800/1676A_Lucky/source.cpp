#include<iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	for(int i = 0; i < t; i++){
		char num[7];
		cin >> num;
		int sum1 = 0;
		int sum2 = 0;
		for(int i = 0; i <= 2; i++){
			sum1 += (num[i] - '0');
		}
		for(int i = 3; i <= 5; i++){
			sum2 += (num[i] - '0');
		}

		if(sum1== sum2) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}