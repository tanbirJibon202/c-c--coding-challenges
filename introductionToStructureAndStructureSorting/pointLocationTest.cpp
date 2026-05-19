#include <bits/stdc++.h>
using namespace std;
struct pointLocation {
    long long x;
    long long y;
};
int main() {
    int test;
    cin >> test;
    while (test--) {
        pointLocation p1, p2, p3;
        cin >> p1.x >> p1.y
            >> p2.x >> p2.y
            >> p3.x >> p3.y;
        long long crossValue =
            (p2.x - p1.x) * (p3.y - p1.y) -
            (p2.y - p1.y) * (p3.x - p1.x);
        if (crossValue > 0)
            cout << "LEFT\n";
        else if (crossValue < 0)
            cout << "RIGHT\n";
        else
            cout << "TOUCH\n";
    }
    return 0;
}