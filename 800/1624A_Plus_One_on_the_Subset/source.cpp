#include<iostream>
using namespace std;

int main(){
    int T;
    cin >> T;
    for(int t =0; t < T; t++){
        int n;
        cin >> n;
        long long c[55];
        long long max = -1;
        long long min = 10e9+1;
        for(int i =0; i < n;i ++){
            cin >> c[i];
            if(c[i] > max) max = c[i];
            if(c[i] < min) min = c[i];
        }

        long long res = max -min;
        cout << res << endl;
    }

    return 0;
}