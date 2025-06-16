#include<iostream>
#include<string>
using namespace std;

int main(){
    string a,b;
    cin >> a;
    cin >> b;
    int n = a.length();
    int s[100];
    for(int i = 0; i < n; i++){
        if( a[i] != b[i]) s[i] = 1;
        else s[i] = 0;
    }

    for(int i = 0; i < n; i++){
        cout << s[i] ;
    }
    return 0;
}