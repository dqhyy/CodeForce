#include<iostream>
using namespace std;

int main(){
    int T;
    cin >> T;
    for(int t = 0; t < T;t++){
        char s[105];
        cin >> s;
        int len = 0;
        while(s[len]!='\0') len++;
        if(len % 2 == 0){
            int k = len / 2 ;
            bool test = true;
            for(int i = 0; i < k; i++){
                if(s[i] != s[k+i]) {
                    test = false;
                    break;
                }
            }
            if(test == false) cout << "NO" << endl;
            else cout << "YES" << endl;
        } else cout << "NO" << endl;

    }

    return 0;
}