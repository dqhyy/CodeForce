#include<iostream>
using namespace std;

int main(){
    long long n;
    cin >> n;
    long long s[5] = {1,5,10,20,100};
    long long res = 0;
    for(int i = 4; i >= 0; i--){
        res += n / s[i];
        n = n - s[i] *( n / s[i]);
    }

    cout << res << endl;
    return 0;
}