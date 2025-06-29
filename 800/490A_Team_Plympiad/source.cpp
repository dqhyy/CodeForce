#include<iostream>

using namespace std;

int main(){
	
	int n;
	cin >> n;
	int c[6000];
	int d[4] = {0};
	for(int i = 1; i <= n; i++){
		cin >> c[i];
		d[c[i]]++;
	}
	int min = 10000;
	for(int i = 1; i <= 3; i++){
		if(d[i] < min) min = d[i];
	}
	cout << min << endl;
	if(min == 0) {
		return 0;
	}
	while(min>0){
		for(int i = 1; i <= n; i++){
			if(c[i] == 1){
				cout << i << " " ;
				c[i] =0;
				break;
			} 
		}
		for(int i = 1; i <= n; i++){
			if(c[i] == 2){
				cout << i << " " ;
				c[i] =0;
				break;
			} 
		}
		for(int i = 1; i <= n; i++){
			if(c[i] == 3){
				cout << i << " " ;
				c[i] =0;
				break;
			} 
		}
		cout << endl;
		min--;
	}

	return 0;
}