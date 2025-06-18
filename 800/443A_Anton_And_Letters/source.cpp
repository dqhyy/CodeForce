#include<iostream>
using namespace std;

int main(){
    char s[1000];
    cin.getline(s,1000);
    int d[26] = {0};
    for(int i = 0; s[i] != '\0'; i++){
        if(s[i] >= 'a' && s[i <= 'z']){
            d[s[i] - 'a']++;
        }
    }

    int ans = 0;

    for(int i = 0; i<26; i++){
        if(d[i] != 0) ans++;
    }

    cout << ans << endl;
    return 0;
}