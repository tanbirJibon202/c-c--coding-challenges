#include <bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   int arr[n];
   for(int i = 0; i < n; i++) cin>>arr[i];
   int l = 0;
   for(int r = 0; r < n; r++){
       if(arr[r] != 0){
           swap(arr[l], arr[r]);
           l++;
       }
   }
    for(int i = 0; i < n; i++) cout<<arr[i]<<" ";

  return 0;
}