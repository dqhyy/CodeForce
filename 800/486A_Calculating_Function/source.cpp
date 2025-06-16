#include<iostream>
using namespace std;
 
int main(){
	long long n;
	cin >> n;
	long long res;
	if(n % 2 == 1) {
		res = n / 2 - n;
	} else if( n % 2 == 0 ){
		res = n / 2;
	}
 
	cout << res << endl;
	return 0;
}