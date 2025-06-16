#include<iostream>
using namespace std;
 
int main(){
	int n;
	cin >> n;
	int s[100000];
	int count = 1;
	for(int i =0; i < n; i++){
		cin >> s[i];
	}
 
	for(int i = 1; i < n; i++){
		if(s[i] != s[i-1]) count++;
	}
 
	cout << count << endl;
	return 0;
}