#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  ll n,i;
  cin>>n;
  vector<ll>a(n+1);
  for ( i = 1; i<=n; i++)
  {
      cin>>a[i];
  }
  vector<ll>b=a;
  sort(b.begin(),b.end());

  // cout<<"Array a: ";
  // for ( i = 1; i <=n; i++)
  // {
  //    cout<<a[i]<<" ";
  // }
  // cout<<endl;

  // cout<<"Array b: ";
  // for ( i = 1; i <=n; i++)
  // {
  //    cout<<b[i]<<" ";
  // }
  // cout<<endl;
  
  vector<ll>pre_a(n+1),pre_b(n+1);
  for(int i=1;i<=n;i++){
    pre_a[i] = pre_a[i-1] + a[i];
    pre_b[i] = pre_b[i-1] + b[i];
   }
   ll m;
   cin>>m;
   while (m--)
   {
    ll type,l,r;
    cin>>type>>l>>r;
    if(type==1){
      cout<<pre_a[r] - pre_a[l-1]<<"\n";
    }else{
    cout<<pre_b[r] - pre_b[l-1]<<"\n";
    }
   }
   
  return 0;
}