#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for (int t = 0; t < T; t++)
    {
        int n;
        cin >> n;
        char s[55];
        cin >> s;
        bool res = true;
        for(int i = 0; i < n; i++){
            if(s[i] != s[i+1]){
                for(int j = i+2; j < n; j++){
                    if(s[j] == s[i]){
                        res = false;
                        break;
                    }
                }

                if(res == false) break;
            }
        }

        cout << (res ? "YES" : "NO") << endl;
    }

    return 0;
}