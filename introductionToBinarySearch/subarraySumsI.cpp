#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n,value,answer=0;
    cin>>n>>value;
    vector<ll>arr(n+1);
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<=n;i++){
        arr[i]+=arr[i-1];
    }
    for(int i=0;i<n;i++){
        auto it = lower_bound(arr.begin(),arr.end(),value+arr[i]);

        if(it!=arr.end() && *it==value+arr[i]){
            answer++;
        }
    }
    cout<<answer<<"\n";
}