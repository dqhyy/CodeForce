#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int count = 0;
    int res = 0;
    int a,b;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        count = count - a + b;
        if(count > res) res = count;
    }

    cout << res;
    return 0;
}