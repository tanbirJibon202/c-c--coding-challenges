#include <bits/stdc++.h>
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
     for (int i = 1; i <=n; i++)
     {
        cout<<pref_sum[i]<<" ";
     }
  return 0;
}