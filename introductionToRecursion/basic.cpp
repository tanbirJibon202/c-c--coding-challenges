#include <bits/stdc++.h>
using namespace std;

int fact(int n){
    if(n == 0){
        return 1;
    }
    return n * fact(n - 1);
}

int main(){
    int num;
    cin >> num;

    if(num >= 0){
        cout << fact(num) << endl;
    }
    else{
        cout << "Factorial is not defined for negative numbers." << endl;
    }
    return 0;
}