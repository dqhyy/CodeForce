#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        int k =  a % b;
        if(k != 0 ){
            k = b - k;
        }
        cout << k << endl;
    }

    return 0;
}