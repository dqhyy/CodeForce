#include<iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    char s[50][50];
    for(int i = 0; i < n; i++){
        if(i%2 == 0){
            for(int j = 0; j < m; j++){
                s[i][j] = '#';
            }
        }else if(i%4 == 1){
            for(int j = 0; j < m-1; j++){
                s[i][j] = '.';
            }
            s[i][m-1] = '#';
        } else if(i%4 == 3){
            for(int j = 1; j < m; j++){
                s[i][j] = '.';
            }
            s[i][0] = '#';
        } 
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << s[i][j];
        }
        cout << endl;
    }

    return 0;
}