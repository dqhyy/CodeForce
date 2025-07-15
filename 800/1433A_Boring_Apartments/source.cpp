#include<iostream>
using namespace std;

int main(){
    int T;
    cin >> T;
    for(int t =0 ; t < T; t++){
        int x;
        cin >> x;
        int k = x % 10;
        int count = 0;
        for(int i = 1; i < k; i++){
            count += 10;
        }

        if(0<x&&x<10) count += 1;
        else if(11<=x &&x<100) count += 3;
        else if(111<=x &&x<1000) count += 6;
        else if(1111<=x &&x<= 9999) count += 10;

        cout << count << endl;
    }

    return 0;
}