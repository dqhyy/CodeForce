#include<iostream>
using namespace std;
 
int main(){
	int n;
	cin >> n;
	int c[1000];
	int count = 0;
	for(int i = 0 ; i < n; i++){
		cin >> c[i];
	}
	int max = c[0];
	int min = c[0];
	for(int i = 1; i < n; i++){
		if(c[i] > max){
			count++;
			max = c[i];
		}
		if(c[i] < min){
			count++;
			min = c[i];
		}
	}
 
	cout << count << endl;
	return 0;
}