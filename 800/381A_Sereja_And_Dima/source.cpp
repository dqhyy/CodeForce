#include<iostream>

using namespace std;

int main(){
	int n;
	int a =0;
	int b = 0;
	bool turna = true;
	bool turnb = false;
	cin >> n;
	int c[1005];
	for(int i = 1; i <= n; i++){
		cin >> c[i];
	}

	int left = 1;
	int right = n;
	while(left <= right){
		if(c[left] > c[right]){
			if(turna == true){
				a += c[left];
				turna = false;
				turnb = true;
			} else {
				b += c[left];
				turna = true;
				turnb = false;
			}

			left++;
		} else {
			if(turna == true){
				a += c[right];
				turna = false;
				turnb = true;
			} else {
				b += c[right];
				turna = true;
				turnb = false;
			}

			right--;
		}
	}

	cout << a << " " << b << endl;

	return 0;
}