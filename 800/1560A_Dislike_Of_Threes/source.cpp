#include<iostream>

using namespace std;

int main(){
	int T;
	cin >> T;
	for(int t = 0; t < T;t++){
		int k;
		cin >> k;
		int count = 1; int num = 0;
		while(count <= k){
			num++;
			if(num % 3!=0 && num % 10!= 3){
				count++;
			}
		}
		cout << num << endl;
	}

	return 0;
}