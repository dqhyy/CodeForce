#include<iostream>
 
using namespace std;
 
int main(){
	int k, r;
	cin >> k >> r;
	int count  = 1;
	while(true){
		if((count*k - r) % 10 == 0 || (count*k) % 10 == 0){
			break;
		}
		count++;
	}
	cout << count << endl;
	return 0;
}