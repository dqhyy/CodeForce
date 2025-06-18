#include<iostream>
using namespace std;

int main(){
    int T;
    int N;
    cin >> T;
    for(int t = 0; t < T; t++){
        int res = 0;
        cin >> N;
        if(N % 2 == 1){
            res = N /2;
        } else {
            res = N/2-1;
        }
        cout << res << endl;
    }

    return 0;
}