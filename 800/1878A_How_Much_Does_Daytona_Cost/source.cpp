#include<iostream>
using namespace std;

int main(){
    int T;
    cin >> T;
    for(int t = 0; t < T; t++){
        int n, k;
        cin >> n >> k;
        int c[105];
        int count = 0;
        for(int i = 0; i < n; i++){
            cin >> c[i];
            if(c[i] == k) count++;
        }
        if(count >= 1 ) cout << "YES" << endl;
        else cout << "NO" << endl;
    } 

    return 0;
}