#include <bits/stdc++.h>
using namespace std;
int main(){
  string str;
  cin>>str;
  int size = str.size(); 
  stack<char>sk;
  int flag = 1;
  for(int i = 0; i<size;i++){
     if(str[i]=='('){
        sk.push('(');
     }else{
      if (sk.empty())
      {
         flag = 0;
         break;
      }else{
        sk.pop();
      }
     }
  }
  if(!sk.empty()){
     flag = 0;
  }if(flag==1){
    cout<<"Yes"<<endl;
  }else{
    cout<<"No"<<endl;
  }
  return 0;
}