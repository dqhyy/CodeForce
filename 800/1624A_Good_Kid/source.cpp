#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    for(int t = 0; t < T; t++){
        int n;
        cin >> n;
        int c[11];
        int res = 1;
        int i_min = 0;
        int min = 10;
        for(int i = 0; i < n; i++){
            cin >> c[i];
            if(c[i] < min) {
                min = c[i];
                i_min = i;
            }
        }

        c[i_min]++;
        for(int i = 0; i < n; i++){
            res *= c[i];
        }

        cout << res << endl;
    }

    return 0;
}