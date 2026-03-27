// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long

// int main(){
//     int n;
//     cin>>n;
//     vector<ll> arr(n+1), pref_sum(n+1);
//     for(int i = 1; i <= n; i++){
//         cin >> arr[i];
//     }
//     for(int i = 1; i <= n; i++){
//         pref_sum[i] = pref_sum[i-1] + arr[i];
//     }
//     ll mx = arr[1], mn_prefix_sum = 0;
//     for (int i = 1; i <=n; i++)
//     {
//        mx = max(mx, pref_sum[i]-mn_prefix_sum);
//        mn_prefix_sum = min(mn_prefix_sum, pref_sum[i]);
//     }
//     cout<<mx<<"\n";
//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n;
    cin>>n;
    vector<ll> arr(n+1), pref_sum(n+1);
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }
    for(int i = 1; i <= n; i++){
        pref_sum[i] = pref_sum[i-1] + arr[i];
    }

    ll mx = arr[1], mn_prefix_sum = 0, index_of_min_prefix_sum = 0, l = 1, r = 1;
    for (int i = 1; i <=n; i++)
    {
      ll current_max = pref_sum[i] - mn_prefix_sum;
      if(current_max > mx){
        mx = current_max;
        r = i;
        l = index_of_min_prefix_sum + 1;
      }if(pref_sum[i]<mn_prefix_sum){
          mn_prefix_sum = pref_sum[i];
          index_of_min_prefix_sum = i;
      }
    }
    cout<<mx<<" "<< l <<" "<< r << endl;
    return 0;
}