#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int i = 0, j = n - 1;
    int player1 = 0, player2 = 0;
    int t = 1;

    while(i <= j){
        if(t % 2 == 1){
            if(arr[i] > arr[j]){
                player1 += arr[i];
                i++;
            } else {
                player1 += arr[j];
                j--;
            }
        } else {
            if(arr[i] > arr[j]){
                player2 += arr[i];
                i++;
            } else {
                player2 += arr[j];
                j--;
            }
        }
        t++;
    }

    cout << player1 << " " << player2 << endl;

    return 0;
}