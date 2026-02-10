#include <bits/stdc++.h>
using namespace std;
int main()
{
  int num;
  cin>>num;
  map<string, bool> allNames;
  while (num--)
  {
    string name;
    cin>>name;
    if(allNames[name]){
      cout<<"YES"<<endl;
    }else{
      cout<<"NO"<<endl;
    }
    allNames[name] = true;
  }
  return 0;
}