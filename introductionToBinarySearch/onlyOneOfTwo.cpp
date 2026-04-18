#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
  int test;
  cin>>test;
  while (test--)
  {
     int n;
     char postion;
     cin>>n>>postion;
     string str;
     cin>>str;
     vector<int>arr;
     for (int i = 0; i <n; i++)
     {
         if(str[i]==postion){
             arr.push_back(i);
         }
     }
     str += str;
     vector<int>arr_2;
     for (int i = 0; i <str.size(); i++)
     {
         if(str[i]=='g'){
          arr_2.push_back(i);
         }
     }
     int answer = 0;
     for (auto value: arr)
     {
        answer = max(answer, *lower_bound(arr_2.begin(), arr_2.end(),value)-value);
     }
     cout<<answer<<"\n";
  }
  
  return 0;
}