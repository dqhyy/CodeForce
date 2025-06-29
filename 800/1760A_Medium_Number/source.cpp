#include<iostream>

using namespace std;

int main(){
	int T;
	cin >> T;
	for(int t = 0; t < T; t++){
		int a, b, c;
		cin >> a >> b >> c;
		if((a>b&&b>c) || (a<b&&b<c)) cout<< b<< endl;
		else if((c>a&&a>b) ||(c<a&&a<b)) cout << a << endl;
		else if((a>c&&c>b) || (a<c&&c<b)) cout << c << endl;
	}

	return 0;
}