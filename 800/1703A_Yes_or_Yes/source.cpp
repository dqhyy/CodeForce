
#include<iostream>
 
using namespace std;
 
int main(){
	int k ;
	cin >> k;
	for(int i = 0; i < k; i++){
		char c[4];
		cin >> c;
		bool res = true;
		if(c[0] != 'Y' && c[0] +'A' - 'a' != 'Y') res = false;
		if(c[1] != 'E' && c[1] +'A' - 'a' != 'E') res = false;
		if(c[2] != 'S' && c[2] +'A' - 'a' != 'S') res = false;
 
		if(res == true) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}