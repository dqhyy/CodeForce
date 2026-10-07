#include<iostream>
using namespace std;

int main(){
    int T;
    cin >> T;
    for(int t = 0; t < T; t++){
        int n;
        cin >> n;
        char s[2005];
        cin >> s;
        int start = 0;
        int end = n-1;
        while(start < end){
            if(s[end] != s[start] ) {
                end--;
                start++;
            } 
            else {
                break;
            }
        }
        int count = -start +end + 1;
        
        cout << count << endl;

    }

    return 0;
}