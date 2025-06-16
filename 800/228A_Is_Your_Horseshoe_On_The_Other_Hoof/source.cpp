#include<iostream>
using namespace std;
 
int main(){
	long long s[4];
	bool d[4];
	for(int i = 0; i < 4; i++){
		cin >> s[i];
		d[i] = false;
	}
 
	int count = 0;
 
	for(int i = 0; i < 4; i++){
		for(int j = i +1; j < 4; j++){
			if(d[i] == false && s[i] == s[j]){
				d[i] = true;
				count++;
			}
		}
	}
 
	cout << count << endl;
	return 0;
}