#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,k;
  cin>>n>>k;
  priority_queue<int,vector<int>,greater<int>>pq;
  while (k--)
  {
      n--;
      int val;
      cin>>val;
      pq.push(val);
  }
  // cout << "Values pushed into the priority queue: ";
  //   while (!pq.empty()) {
  //       cout << pq.top() << " ";
  //       pq.pop(); 
  //   }
  //   cout << endl; 
  //   cout<<n<<endl;
  
  cout<<pq.top()<<"\n";
  while (n--)
  {
      int val;
      cin>>val;
      pq.push(val);
      pq.pop();
      cout<<pq.top()<<"\n";
  }
  
  
  return 0;
}