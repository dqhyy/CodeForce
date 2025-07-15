#include<iostream>
using namespace std;

int main(){
    int T;
    cin >> T;
    for(int t = 0; t < T; t++){
        int n;
        cin >> n;
        char s[55];
        cin >> s;
        int count  = 0;
        int d[26] = {0};
        for(int i =0 ;i < n; i++){
            if(d[s[i]-'A'] == 0){
                count += 2;
                d[s[i]-'A'] = -1;
            } else {
                count++;
            }
        }

        cout << count << endl;
    }
}