#include <bits/stdc++.h>
using namespace std;

int n, m;

struct DNA {
    string str;
    int inversion;
    int index;
    void input(int index) {

        this->index = index;
        inversion = 0;

        cin >> str;

        for (int i = 0; i < n; i++) {

            for (int j = i + 1; j < n; j++) {

                inversion += (str[i] > str[j]);

            }
        }
    }
};

bool cmp(DNA &a, DNA &b) {

    if (a.inversion < b.inversion) {
        return true;
    }

    if (a.inversion > b.inversion) {
        return false;
    }

    return a.index < b.index;
}

int main() {

    int test;
    cin >> test;

    for (int i = 0; i < test; i++) {

        if (i != 0) {
            cout << "\n";
        }

        cin >> n >> m;

        DNA arr[m];

        for (int i = 0; i < m; i++) {
            arr[i].input(i);
        }
        sort(arr, arr + m, cmp);
        for (int i = 0; i < m; i++) {
            cout << arr[i].str << "\n";
        }
    }
    return 0;
}