#include<iostream>

using namespace std;

int main(){
	
	int T;
	cin >> T;
	for(int t = 0; t < T; t++){
		char a[4];
		char b[4];
		cin >> a >> b;
		char temp = a[0];
		a[0] = b[0];
		b[0] = temp;
		for(int i =0; i <3; i++){
			cout << a[i];
		}
		cout << " ";
		for(int i =0; i <3; i++){
			cout << b[i];
		}
		cout << endl;
	}

	return 0;
}