#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,value;
  cin>>n>>value;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int l = 0, r = 0, sum = 0, count = 0;
  while(r < n){
    sum += arr[r];
    while(sum > value){
      sum -= arr[l];
      l++;
    }
    if(sum == value){
      count++;
    }
    r++;
  }
  cout<<count<<endl;
  return 0;
}
