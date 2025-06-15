#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int s[100];
    for(int i = 0; i< n; i++){
        cin >> s[i];
    }
    bool test = true;
    for(int i = 0; i < n; i++){
        if(s[i] == 1){
            test = false;
            break;
        }
    }

    if(test == true) cout << "EASY" << endl;
    else cout << "HARD" << endl;
    return 0;
}