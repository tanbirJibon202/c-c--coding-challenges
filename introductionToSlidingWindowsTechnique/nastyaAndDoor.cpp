#include <bits/stdc++.h>
using namespace std;
int main() {
    int test;
    cin >> test;
    while (test--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        vector<int> peak(n, 0);
        for (int i = 1; i < n - 1; i++) {
            if (a[i] > a[i - 1] && a[i] > a[i + 1])
                peak[i] = 1;
        }
        int current_window = 0;
        for (int i = 1; i <= k - 2; i++) {
            current_window += peak[i];
        }
        int max_peak = current_window;
        int indx = 0;
        for (int l = 1; l <= n - k; l++) {
            current_window -= peak[l];
            current_window += peak[l + k - 2];
            if (current_window > max_peak) {
                max_peak = current_window;
                indx = l;
            }
        }
        cout << max_peak + 1 << " " << indx + 1 << endl;
    }
    return 0;
}