#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int s[30][2];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 2; j++){
            cin >> s[i][j];
        }
    }

    int count = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(s[i][0] == s[j][1]) count++;
        }
    }

    cout << count << endl;
    return 0;
}