#include <bits/stdc++.h>
using namespace std;  
int main(){
  int test;
  cin>>test;
  while(test--){
    string str;
    cin>>str;
    int n = str.length();
    for(int i = 0; i < n; i++){
        if(i % 2 == 0){ 
            if(str[i] == 'a'){
                str[i] = 'b';
            } else {
                str[i] = 'a';
            }
        }
        else { 
            if(str[i] == 'z'){
                str[i] = 'y';
            } else {
                str[i] = 'z';
            }
        }
    }
    cout<<str<<endl;
  }
  return 0;
}