#include<iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	int c[101];
	int max = -1;
	for(int i = 0; i < n; i++){
		cin >> c[i];
		if(max < c[i]) max = c[i];
	}
	int sum = 0;
	for(int i = 0; i < n; i++){
		sum += (max-c[i]);
	}
	cout << sum;

	return 0;
}