#include<iostream>

using namespace std;

int main(){
	char c[201];
	cin >> c;
	int len = 0;
	while(c[len] != '\0') len++;
	for(int i = 0; i < len; i++){
		if(c[i] == '.'){
			cout << 0 ;
		} else if(c[i] == '-'){
			if(c[i+1] == '.'){
				cout << 1;
				i++;
			} else {
				cout << 2;
				i++;
			}
		}
	}
	cout << endl;

	return 0;
}