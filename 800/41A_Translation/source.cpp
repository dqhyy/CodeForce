#include <iostream>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    if (s1.length() != s2.length())
    {
        cout << "NO" << endl;
    }
    else
    {
        int n = s1.length();
        bool s = true;
        for (int i = 0; i < n; i++)
        {
            if(s1[i] != s2[n-1-i]){
                s = false; 
                break;
            }
        }

        if(s == true) cout << "YES" << endl;
        else cout << "NO"<< endl;
    }

    return 0;
}