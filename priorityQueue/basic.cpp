#include <bits/stdc++.h>
using namespace std;
int main(){
  priority_queue<int> pq;
  pq.push(20);
  pq.push(21);
  pq.push(15);
  pq.pop();
  cout<<pq.top()<<endl;
  
  return 0;
}