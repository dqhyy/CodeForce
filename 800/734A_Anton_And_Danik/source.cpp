#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int anton = 0;
    int danik = 0;
    char s[100000];
    for(int i = 0; i < n; i++){
        cin >> s[i];
        if(s[i] == 'A') anton++;
        if(s[i] == 'D') danik++;
    }

    if(anton > danik) cout << "Anton" << endl;
    else if(danik > anton) cout << "Danik" << endl;
    else cout << "Friendship" << endl;
    return 0;

}