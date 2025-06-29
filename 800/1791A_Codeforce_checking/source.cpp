#include<iostream>

using namespace std;

int main(){
	int T;
	cin >> T;
	char s[11] = "codeforces";
	for(int t = 0; t < T; t++){
		char c;
		cin >> c;
		bool res = false;
		for(int i = 0; i < 11; i++){
			if(s[i] == c){
				res = true;
				break;
			}
		}

		if(res == false) cout << "NO" << endl;
		else cout << "YES" << endl;
	}

	return 0;
}