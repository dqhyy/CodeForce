#include<iostream>

using namespace std;

int main(){
	int T;
	cin >> T;
	for(int t = 0; t < T; t++){
		int n;
		int c[101];
		int d[101] = {0};
		cin >> n;
		for(int i = 1; i <= n; i++){
			cin >> c[i];
			d[c[i]]++;
		}
		int count = 0;
		for(int i = 1; i <= 100; i++){
			if(d[i] == 1) count = i; 
		}
		int res = 0;
		for(int i = 1; i <= n; i++){
			if(c[i] == count)  res = i;
		}
		cout << res << endl;
	}

	return 0;
}