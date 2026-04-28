#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
      cin>>arr[i];
    }
    int l = 0, r = n-1;
    vector<int> v;
    while (1)
    {
       if(arr[l]*arr[l] > arr[r]*arr[r]){
           v.push_back(arr[l]*arr[l]);
           l++;
       }else{
           v.push_back(arr[r]*arr[r]);
           r--;
       }
       if(r<l){
            break;
       }
    }

    reverse(v.begin(), v.end());
    for(int value: v){
        cout<<value<<" "; 
    }
    
     
  return 0;
}