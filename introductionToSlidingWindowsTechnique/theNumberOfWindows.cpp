#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  int n,q;
  cin>>n>>q;
  int arr[n];
  for (int i = 0; i <n; i++)
  {
      cin>>arr[i];
  }
  while (q--)
  {
     ll value;
     cin>>value;
     queue<int>window;
     ll sum = 0;
     ll answer = 0;
     for (int i = 0; i <n; i++)
     {
        window.push(arr[i]);
        sum = sum + arr[i];
        while (sum>value)
        {
            sum = sum - window.front();
            window.pop();
        }
        answer = answer + window.size();
        
     }
     cout<<answer<<endl;
     
  }
  
  return 0;
}