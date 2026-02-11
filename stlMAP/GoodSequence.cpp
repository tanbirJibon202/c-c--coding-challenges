#include <bits/stdc++.h>
using namespace std;
int main(){
  map<int,int>count;
  int num;
  cin>>num;
  for(int i = 0; i<num; i++){
    int value;
    cin>>value;
    count[value]++;
  }
  int answer = 0;
  for (auto pair : count)
  {
    // cout<<pair.first<<" "<<pair.second;
    int number = pair.first;
    int freq = pair.second;
    if(number<freq){
      answer = answer + freq - number;

    }else if(number>freq){
      answer = answer + freq;
    }
  }
  cout<<answer<<endl;
  
  return 0;
}