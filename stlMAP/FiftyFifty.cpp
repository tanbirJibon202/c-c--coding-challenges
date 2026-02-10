#include <bits/stdc++.h>
using namespace std;
int main(){
  map<char, int> count;
  char c;
  for(int i = 0; i < 4; i++){
    cin>>c;
    count[c]++;
  }
  if(count.size() == 2){
    auto it_1 = count.begin();
    auto it_2 = count.begin();
    it_2++;
    
    if(it_1->second == 2 && it_2->second == 2){
      cout<<"Yes"<<endl;
    }
    else{
      cout<<"No"<<endl;
    }
  }else{
    cout<<"No"<<endl;
  }
  return 0;
}