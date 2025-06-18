#include<iostream>
using namespace std;

int main() {
    string guest, host, pile;
    cin >> guest >> host >> pile;

    int count[26] = {0};

    for (char c : guest) count[c - 'A']++;
    for (char c : host) count[c - 'A']++;
    for (char c : pile) count[c - 'A']--;

    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
    return 0;
}
