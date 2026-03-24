#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
     cin>>n;
     int pref_sum[n+1], arr[n+1];
     pref_sum[0] = 0;
     for (int i = 1; i <= n; i++)
     {
        cin>>arr[i];
     }
     for (int i = 1; i <=n; i++)
     {
        pref_sum[i] = pref_sum[i-1] + arr[i];
     }
     int q;
     cin>>q;
     for (int i = 1; i <= q; i++)
     {
        int l, r;
        cin>>l>>r;
        cout<<pref_sum[r] - pref_sum[l-1]<<"\n";
     }
     
  return 0;
}