#include<iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	for(int i = 0; i < t; i++){
		int c[4];
		for(int j = 0; j < 4; j++){
			cin >> c[j];
		}
		int count = 0;
		for(int j = 1; j < 4; j++){
			if(c[j] > c[0]) count++;
		}

		cout << count << endl;
	}
	return 0;
}