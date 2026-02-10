#include <bits/stdc++.h>
using namespace std;

int main(){
  int q;
  cin>>q;
  map<string, int> allMarks;
  while(q--){
    int type;
    cin>>type;
    if(type == 1){
    string name;
    int marks;
    cin>>name>>marks;
    allMarks[name] += marks;
    }
    else if(type == 2){
      string name;
      cin>>name;
      allMarks.erase(name);
    }
    else{
      string name;
      cin>>name;
      cout<<allMarks[name]<<endl;
    }
    
  }

}