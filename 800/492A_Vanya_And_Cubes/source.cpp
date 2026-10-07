#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int height = 0;
    int count = 0;
    while(n>0){
        count += height;
        height++;
        n = n - height - count;
    }
    if(n<0) cout << height-1<< endl;
    else cout << height << endl;
    return 0;
}