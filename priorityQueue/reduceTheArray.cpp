#include <bits/stdc++.h>
using namespace std;
int main(){
  int test;
  cin>>test;
  while (test--)
  {
      int n;
      cin>>n;
      priority_queue<int,vector<int>,greater<int>>pq;
      for (int i = 0; i < n; i++)
      {
          int val;
          cin>>val;
          pq.push(val);      
      }
      long long answer = 0;
      while (pq.size()>1)
      {
          int first_small_val = pq.top();
          pq.pop();
          int second_small_val = pq.top();
          pq.pop();
          long long sum = first_small_val + second_small_val;
          answer += sum;
          pq.push(first_small_val + second_small_val);
      }
      cout<<answer<<endl;  
  }
  
  return 0;
}