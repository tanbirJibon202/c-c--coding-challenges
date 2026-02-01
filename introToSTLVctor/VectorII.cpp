#include <bits/stdc++.h>
using namespace std;
int main(){
  int n, q;
  cin>>n>>q;
  vector<int>arr[n];
  for(int i = 0; i<q; i++){

    int type;
    cin>>type;

    if(type == 0){
      int t, x;
      cin>>t>>x;
      arr[t].push_back(x);
    }

    else if(type == 1){
      int t;
      cin>>t;
      for (int j = 0; j < arr[t].size(); j++)
      {
           cout<<arr[t][j];
           if(j!=arr[t].size()-1){
            cout<<" ";
           }
      }
      cout<<'\n';
    }

    else{
      int t;
      cin>>t;
      arr[t].clear();
    }

  }

  return 0;
}