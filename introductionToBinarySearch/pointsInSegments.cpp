#include <bits/stdc++.h>
using namespace std;
int main(){
  int q;
  cin>>q;
  for(int k = 1; k<=q; k++){
    int n, qq;
    cin>>n>>qq;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    cout<<"Case "<<k<<":\n";
    while (qq--)
    {
        int left, right;
        cin>>left>>right;
        cout<<upper_bound(arr.begin(), arr.end(), right) - lower_bound(arr.begin(), arr.end(), left)<<'\n';
    }
  }
  
  return 0;
}