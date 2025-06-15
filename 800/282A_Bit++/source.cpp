#include<iostream>
using namespace std;

int main(){
    int x = 0;
    int n;
    cin >> n;
    char s[3];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 3; j++){
            cin >> s[j];
        }

        if(s[1] == '+') x++;
        else if(s[1] == '-') x--;
    }
    cout << x << endl; 
    return 0;
    
}