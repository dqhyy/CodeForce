#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cin >> s;
    int p[4] = {0};
    for(int i = 0; i < s.length(); i+=2){
        if(s[i] != '+'){
            p[(s[i]-'0')] ++;
        }
    }

    bool first = true;
    for (int i = 1; i <= 3; i++) {
        for (int j = 0; j < p[i]; j++) {
            if (first == false) cout << "+";
            cout << i;
            first = false;
        }
    }

    cout << endl;
    return 0;
}