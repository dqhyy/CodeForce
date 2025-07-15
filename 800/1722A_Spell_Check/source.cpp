#include<iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;
        char s[11];         // n <= 10 theo đề
        int d[256] = {0};   // dùng mã ASCII

        if (n != 5) {
            cout << "NO" << endl;
            // bỏ qua input còn lại
            for (int i = 0; i < n; i++) cin >> s[i];
            continue;
        }

        for (int i = 0; i < n; i++) {
            cin >> s[i];
            d[(int)s[i]]++;
        }

        if (d['T'] == 1 && d['i'] == 1 && d['m'] == 1 && d['u'] == 1 && d['r'] == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
