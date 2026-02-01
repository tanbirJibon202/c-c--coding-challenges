#include <bits/stdc++.h>
using namespace std;
int call(){
  string str;
  getline(cin,str);
  int vowel_count = 0;
  for(auto& it: str){
      if(it == 'a' || it == 'e' || it == 'i' || it == 'o' || it == 'u'){
          vowel_count++;
      }
  }
  return vowel_count;
}
int main() {
    
    int str1 = call();
    int str2 = call();
    int str3 = call();
    if(str1 == 5 && str2 == 7 && str3 == 5){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}