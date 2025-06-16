#include<iostream>
using namespace std;
 
int main(){
	int n;
	cin >> n;
	int s[101];
	int d[101];
	for(int i = 1; i <= n; i++){
		cin >> s[i];
		d[s[i]] = i;
	}
 
	for(int i = 1; i <= n; i++){
		cout << d[i] << " " ;
	}
 
	cout << endl;
	return 0;
 
}