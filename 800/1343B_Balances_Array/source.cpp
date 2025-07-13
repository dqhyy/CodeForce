#include<iostream>

using namespace std;

int main(){
    int T;
    cin >> T;
    for(int t = 0; t < T; t++){
        int n;
        cin >> n;
        if( n % 2 == 0 &&  (n / 2) % 2 == 0){
            cout << "YES" << endl;
            int k = n / 2;
            int sum1 = 0;
            int sum2 = 0;
            for(int i = 0; i < k; i++){
                cout << (2*i+2) << " ";
                sum1 += (2*i+2);
            }

            for(int i = k; i < n-1; i++){
                cout << (2* (i-k)+1) << " ";
                sum2 += 2*(i-k)+1;
            }

            cout << (-sum2+sum1);
            cout << endl;
        } else {
            cout <<"NO"<< endl;
        }
    }
    return 0;

}