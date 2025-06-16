#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    char s[100];
    bool d[26] = {false};
    int count = 0;

    for(int i = 0; i < n; i++){
        cin >> s[i];
        if(s[i] >= 'a' && s[i] <= 'z'){
            s[i] = s[i] - 'a' + 'A';
        }
    }

    for(int i = 0; i < n; i++){
        if(!d[s[i] - 'A']){ 
            d[s[i] - 'A'] = true;
            count++;
        }
    }

    if(count == 26){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
