#include <bits/stdc++.h>
using namespace std;
int main(){
  pair<int,int>p;
  cin>>p.first>>p.second;
  if(p.first+p.second+(p.first*p.second)==111){
    printf("Yes");
  }else{
    printf("No");
  }
  return 0;
}