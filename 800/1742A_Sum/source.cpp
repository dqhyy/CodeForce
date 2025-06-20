#include<iostream>
using namespace std;

int a,b,c;

int main(){
    int T;
    cin >> T;
    for(int t =1; t <= T; t++){
        int max = -1;
        cin >> a >> b >> c;
        bool res;
        if(a >= b && a >= c){
            res = ( a == b+c);
        } else if (b >= a && b >= c){
            res = ( b == a+c);
        } else if (c >= b && c >= a){
            res = ( c == b+a);
        }

        if(res ==  true) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}