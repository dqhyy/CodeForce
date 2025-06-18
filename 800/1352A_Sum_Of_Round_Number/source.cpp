#include<iostream>
using namespace std;

int main(){
    int T;
    cin >> T;
    for(int t = 0; t < T; t++){
        int n;
        cin >> n;
        int count = 0;
        while(n>0){
            int num = n%10;
            if(num == 0) {
                n = n/10;
                count++;
                continue;
            }
            for(int i = 0; i < count; i++){
                num  *= 10;
            }

            cout << num << " ";
            n = n / 10;
            count++;
        }

        cout << endl;
    }

    return 0;
}