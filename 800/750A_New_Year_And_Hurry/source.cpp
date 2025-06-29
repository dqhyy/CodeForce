#include<iostream>
using namespace std;
 
int main(){
	int n, k;
	cin >> n >> k;
	int t = 240 - k;
	int count = 0;
	for(int i = 1; i<= n; i++){
		t -= (5*i);
		if(t<0) {
			break;
		}
		count++;
	}
	cout << count << endl;
	return 0;
}