#include<iostream>
using namespace std;
 
int main(){
	int n, k, l, c, d, p, nl, np;
	cin >> n >> k >> l >> c >> d >> p >> nl >> np;
	int v = k * l;
	int min = v / nl;
	int sc = c * d;
	if( min > sc) min = sc;
	if( min > (p/np)) min = (p/np);
 
	int res = min / n;
	cout << res << endl;
	return 0;
}