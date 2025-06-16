#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int s[100];
    for(int i = 0; i < n; i++){
        cin >> s[i];
    }

    int max = 0;
    int min = 101;
    int d1 = 0;
    int d2 = 0;

    for(int i = 0; i < n; i++){
        if(s[i] > max){
            max = s[i];
            d1 = i;
        }

        if(s[i] <= min){
            min = s[i];
            d2 = i;
        }
    }

    int res = d1 + n - 1- d2;
    if(d1 > d2) res--; 
    cout << res << endl;
    return 0;
}