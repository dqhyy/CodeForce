#include<iostream>
using namespace std;
 
int main(){
	long long n;
	cin >> n;
	int c[100005];
	for(long long i = 0; i < n; i++){
		cin >> c[i];
	}
 
	for(long long i = 0; i < n; i++){
		if(c[i] >0){
			for(long long j = i + 1; j < n; j++){
				if(c[j] == -1) {
					c[j] = 0;
					c[i]--;
					if(c[i] == 0) {
						break;	
					}
 
				}
			}
		}
	}
 
	int count  = 0;
	for(long long i = 0; i < n; i++){
		if(c[i] == -1) count++;
	}
	cout << count << endl;
	return 0;
}