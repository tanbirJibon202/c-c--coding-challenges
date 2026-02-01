#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int x;
    cin >> x;
    arr.erase(arr.begin() + x - 1); 

    int a, b;
    cin >> a >> b;
    arr.erase(arr.begin() + a - 1, arr.begin() + b-1);  

    int size = arr.size();  
    cout << size << '\n';

    
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << '\n';

    return 0;
}
