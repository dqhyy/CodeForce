#include<iostream>

using namespace std;

int main(){
	
	int T;
	cin >> T;
	for(int t = 0; t < T; t++){
		int n;
		cin >> n;
		int turn = 10;
		if(n%3 == 0){
			cout << "Second" << endl;
		} else {
			cout << "First" << endl;
		}
	}

	return 0;
}