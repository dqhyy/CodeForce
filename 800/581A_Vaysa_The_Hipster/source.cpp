#include<iostream>
 
using namespace std;
 
int main(){
	int a, b;
	cin >> a >> b;
	int min;
	int max;
	if( a > b) {min = b; max = a;}
	else {min = a; max = b;}
	cout << min << " ";
	cout << (max-min)/2 << endl;
 
	return 0;
}