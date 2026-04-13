#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  ll q;
  cin>>q;
  while (q--)
  {
     ll n;
     cin>>n;
     vector<ll>value,index;
     for (int i = 1; i <=n; i++)
     {
         ll x;
         cin>>x;
         if(i>x){
             value.push_back(x);
             index.push_back(i);
         }
     }
     ll answer = 0;
     for (int i = 0; i <value.size(); i++)
     {
        answer = answer + lower_bound(index.begin(), index.end(),value[i]) - index.begin();
     }
     cout<<answer<<"\n";
  }
  
  return 0;
}