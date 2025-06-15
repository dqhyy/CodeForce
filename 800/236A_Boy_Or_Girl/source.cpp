#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cin >> s;
    bool c[26] = {false};
    for(int i = 0; i < s.length(); i++){
        c[s[i]-'a'] = true;
    }

    int count  = 0;
    for(int i = 0; i < 26; i++){
        if(c[i] ==  true) count++;
    }

    if(count % 2 == 0) cout << "CHAT WITH HER!" << endl;
    else cout << "IGNORE HIM!"<< endl;
    return 0;
}