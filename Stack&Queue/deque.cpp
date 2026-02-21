#include <bits/stdc++.h>
using namespace std;
int main(){
  deque<int>de;
  de.push_back(10);
  de.push_back(15);
  for (int val : de)
  {
    cout<<val<<" ";
  }
  cout<<endl;
  de.push_front(2);
  for (int val : de)
  {
    cout<<val<<" ";
  }
  cout<<endl;
  de.push_front(7);
  de.pop_back();
  for (int val : de)
  {
    cout<<val<<" ";
  }
  cout<<endl;
  de.pop_front();
   for (int val : de)
  {
    cout<<val<<" ";
  }
  cout<<endl;
  
  return 0;
}