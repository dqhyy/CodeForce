#include<iostream>
using namespace std;

int main(){
    int T;
    cin >> T;
    for(int t = 0; t < T;t++){
        int h, m;
        cin >> h >> m;
        int res = (24-h-1)*60 + (60-m);
        cout << res << endl;
    }

    return 0;
}