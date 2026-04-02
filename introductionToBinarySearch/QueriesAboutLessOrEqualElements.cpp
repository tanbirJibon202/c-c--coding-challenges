#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,m;
  cin>>n>>m;
  vector<int> arr(n), b(m);
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  sort(arr.begin(), arr.end());
  for(int i=0;i<m;i++){
    cin>>b[i];
    int index = upper_bound(arr.begin(), arr.end(), b[i]) - arr.begin();
    cout<<index<<'\n';
  }
  return 0;
}