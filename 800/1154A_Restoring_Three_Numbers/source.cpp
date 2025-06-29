#include<iostream>
 
using namespace std;
 
int main(){
	int c[4];
	int max = 0;
	int imax = 0;
	for(int i = 0; i < 4; i++){
		cin >> c[i];
		if(max < c[i]) {
			max = c[i];
			imax = i;
		}
	}
	for(int i = 0; i < 4; i++){
		if( i != imax){
			cout << max - c[i] << " ";
		}
	}
	cout << endl;
	return 0;
}