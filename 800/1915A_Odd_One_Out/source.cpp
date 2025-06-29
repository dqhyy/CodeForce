#include<iostream>

using namespace std;

int main(){
	int T;
	cin >> T;
	for(int t = 0; t < T; t++){
		int a, b, c;
		cin >> a >> b >> c;
		if(a==b) cout << c << endl;
		else if(a==c) cout << b << endl;
		else if(b==c) cout << a << endl;
	}

	return 0;
}