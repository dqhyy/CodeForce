#include<iostream>
#include<string>
using namespace std;

int main(){
    string s1, s2;
    
    cin >> s1 >> s2;
    for(int i = 0; i < s1.length(); i++){
        if (s1[i] >= 'A' && s1[i] <= 'Z') {
            s1[i] = s1[i] + ('a' - 'A'); // hoặc +32
        }
    }

    for(int i = 0; i < s1.length(); i++){
        if (s2[i] >= 'A' && s2[i] <= 'Z') {
            s2[i] = s2[i] + ('a' - 'A'); // hoặc +32
        }
    }

    if (s1 < s2) cout << -1 << endl;
    else if (s1 > s2) cout << 1 << endl;
    else cout << 0 << endl;

    return 0;
    
}