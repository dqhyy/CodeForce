#include <iostream>
using namespace std;

int main()
{
    int n;
    int T;
    string t, s;
    cin >> T;
    
    for (int test = 0; test < T; test++)
    {
        cin >> n;
        cin >> t >> s;
        int ans = 0;
        for (int i = 0; i < n; ++i)
        {
            if (s[i] == '1')
            {
                if (t[i] == '0')
                {
                    ans++;
                }
                else if (i > 0 && t[i - 1] == '1')
                {
                    t[i - 1] = '0';
                    ans++;
                }
                else if (i + 1 < n && t[i + 1] == '1')
                {
                    t[i + 1] = '0';
                    ans++;
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}
