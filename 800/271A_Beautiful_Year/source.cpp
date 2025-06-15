#include <iostream>
#include <string>
using namespace std;

bool hasUniqueDigits(int year) {
    int used[10] = {0};

    while (year > 0) {
        int digit = year % 10;
        if (used[digit]) return false;
        used[digit] = 1;
        year /= 10;
    }

    return true;
}

int main() {
    int y;
    cin >> y;
    while (true) {
        y++;
        if (hasUniqueDigits(y)) {
            cout << y << endl;
            break;
        }
    }
}
