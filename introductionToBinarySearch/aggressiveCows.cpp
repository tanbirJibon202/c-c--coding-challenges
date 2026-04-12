#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  int test;
  cin>>test;
  while(test--){
      ll n, k;
      cin>>n>>k;
      vector<ll>arr(n);
      for (int i = 0; i <n; i++)
      {
        cin>>arr[i];      
      }
      sort(arr.begin(),arr.end());
      ll start = 0, end=arr[n-1]-arr[0], mid, answer;
      while (start<=end)
      {
         mid = start + (end-start)/2;
         ll count = 1, postion = arr[0];
         for (int i = 0; i <n; i++)
         {
             if(postion+mid<=arr[i]){
              count++;
              postion = arr[i];
             }
         }
         if(count<k){
             end = mid - 1;
         }else{
           answer = mid;
           start = mid + 1;
         }
      }  
       cout<<answer<<"\n"; 
  }
  return 0;
}