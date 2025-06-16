#include<iostream>
using namespace std;
 
int main(){
	float n;
	cin >> n;
	float p[100];
	float sum = 0;
	for(int i = 0; i < n; i++){
		cin >> p[i];
		sum += p[i];
	}
	float res = sum / n;
	cout << res << endl;
	return 0;
}