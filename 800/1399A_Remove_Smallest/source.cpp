#include<iostream>

using namespace std;

int main(){
	int T;
	cin >> T;
	for(int t = 0; t < T; t++){
		int n;
		cin >> n;
		int c[1001];
		for(int i = 0; i < n; i++){
			cin >> c[i];
		}

		for(int i = 0; i < n; i++){
			for(int j = i+1; j < n; j++){
				if(c[i] >= c[j]){
					int temp = c[j];
					c[j] = c[i];
					c[i] = temp;
				}
			}
		}

		for(int i = 0; i < n; i++){
			for(int j = i+1; j < n; j++){
				if(c[i] - c[j] <= 1 && c[i] - c[j] >= 0) c[j] = -1;
				if(c[j] - c[i] <= 1 && c[j] - c[i] >= 0) c[i] = -1;
			}
		}
		int count = 0;
		for(int i =0 ;i < n; i++){
			if(c[i] != -1) count++;
		}
		if(count == 1) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}