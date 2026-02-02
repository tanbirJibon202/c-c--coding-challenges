#include <bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
      string str[8];
      string str2;
      for(int i = 0; i < 8; i++){
        cin >> str[i];
        for (int j = 0; j < 8; j++)
        {
           if(str[i][j] != '.'){
               str2 += str[i][j];
           }
        }
        
      }
      cout << str2 << endl;
    }
  return 0;
}