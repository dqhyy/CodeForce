#include<iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    int count1 = 0;
    int count2 = 0;
    for(int i = 0; i < s.length(); i++){
        if (s[i] >= 'A' && s[i] <= 'Z'){
            count1++;
        } else if(s[i] >= 'a' && s[i] <= 'z'){
            count2++;
        }
    }

    if(count1 <= count2){
        for(int i = 0; i < s.length(); i++){
            if (s[i] >= 'A' && s[i] <= 'Z') {
                s[i] = s[i] + ('a' - 'A'); // hoặc +32
            }
        }

        cout << s << endl;
    } else {
        for(int i = 0; i < s.length(); i++){
            if (s[i] >= 'a' && s[i] <= 'z') {
                s[i] = s[i] + ('A' - 'a'); // hoặc +32
            }
        }
        cout << s << endl;
    }
    return 0;
}