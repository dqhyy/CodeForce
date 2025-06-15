#include<iostream>
using namespace std;

int main(){
    int n, h;
    cin >> n >> h;
    int s[1000];
    int res = 0;
    for(int i =0; i< n; i++){
        cin >> s[i];
        if(s[i] > h) res += 2;
        else res++;
    }

    cout << res;
    return 0;
}