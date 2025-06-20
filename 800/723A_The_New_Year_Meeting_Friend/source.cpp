#include <iostream>
using namespace std;

int main()
{
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;
    int res = 0;
    if ((x1 - x2) * (x3 - x2) < 0)
    {
        res = abs(x1 - x2) + abs(x2 - x3);
    }
    else if ((x2 - x1) * (x3 - x1) < 0)
    {
        res = abs(x3 - x1) + abs(x2 - x1);
    }
    else if ((x1 - x3) * (x2 - x3) < 0)
    {
        res = abs(x1 - x3) + abs(x2 - x3);
    }
    cout << res << endl;
    return 0;
}