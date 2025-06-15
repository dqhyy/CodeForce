#include<iostream>
using namespace std;

int main(){
    int k, n, w;
    cin >> k >> n >> w;
    int numberBanana = w * (w+1) /2;
    int res = k * numberBanana - n;
    if(res < 0) cout << 0;
    else cout << res;
    return 0;
}