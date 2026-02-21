#include <bits/stdc++.h>
using namespace std;
int main(){
  queue<int>qu_1;
  int nums,k;
  cin>>nums>>k;
  for (int i = 0; i < nums; i++)
  {   
      int val;
      cin>>val;
      qu_1.push(val);
  }
  // cout << "All elements in the queue:" << endl;
  //   while (!qu_1.empty()) {
  //       cout << qu_1.front() << " ";
  //       qu_1.pop();
  //   }
  //   cout << endl;
  stack<int>sk;
  for (int i = 0; i < k; i++)
  {
      int val = qu_1.front();
      sk.push(val);
      qu_1.pop();
  }
    // cout << "Stacked elements (in LIFO order):" << endl;
    // while (!sk.empty()) {
    //     cout << sk.top() << " ";
    //     sk.pop(); 
    // }
    // cout << endl;
    queue<int>qu_2;
    for (int i = 0; i < k; i++)
    {
        int val = sk.top();
        qu_2.push(val);
        sk.pop();
    }
    // cout << "All elements in the queue:" << endl;
    // while (!qu_2.empty()) {
    //     cout << qu_2.front() << " ";
    //     qu_2.pop();
    // }
    // cout << endl;
    int size = qu_1.size();
    for (int i = 0; i < size; i++)
    {
        int val = qu_1.front();
        qu_2.push(val);
        qu_1.pop();
    }
     cout << "All elements in the queue:" << endl;
    while (!qu_2.empty()) {
        cout << qu_2.front() << " ";
        qu_2.pop();
    }
    cout << endl;
    
  
  
  return 0;
}