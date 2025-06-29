#include<iostream>

using namespace std;

bool isPrime(int k){
	for(int i = 2; i*i <= k; i++){
		if(k % i == 0) return false;
	}

	return true;
}

int main(){
	int n;
	cin >> n;
	int x = 4;
	int y;
	while(true){
		y = n -x;
		if(isPrime(x) == false && isPrime(y) == false) break;
		x++;
	}

	cout << x << " " << y << endl;

	return 0;
}