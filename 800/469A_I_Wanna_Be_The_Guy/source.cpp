#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int p,q;
    int s1[100],s2[100];
    int s[101];
    for(int i = 1; i <= n; i++){
        s[i] = 0;
    }
    cin >> p;
    for(int i = 0; i < p; i++){
        cin >> s1[i];
        s[s1[i]]++;
    }
    cin >> q;
    for(int i = 0; i < q; i++){
        cin >> s2[i];
        s[s2[i]]++;
    }

    int count = 0;

    for(int i = 1; i <= n; i++){
        if (s[i]!= 0){
            count++;
        }
    }
    if (count == n){
        cout << "I become the guy." << endl;
    } else {
        cout <<"Oh, my keyboard!" << endl;
    }

    return 0;
}