#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int a[5][5];
    int c, l; 
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin >> a[i][j];
            if(a[i][j] == 1) {
                l = i - 2;
                c = j - 2;
            }
        }
    }

    int res = abs(l) + abs(c);
    cout << res << endl;
    return 0;
}