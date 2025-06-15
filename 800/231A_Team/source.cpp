#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[3];
    int res = 0;
    for(int i = 0; i < n; i ++){
        int count = 0;
        for(int j =0 ; j < 3; j++){
            cin >> a[j];
            if (a[j] == 1) count++;
        }

        if(count >= 2) res ++; 
    }

    cout << res << endl;
    return 0;
}