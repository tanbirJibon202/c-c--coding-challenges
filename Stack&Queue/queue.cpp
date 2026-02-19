#include <bits/stdc++.h>
using namespace std;
int main(){
   queue<int>qe;
  int test;
  cin>>test;
  for (int i = 0; i < test; i++)
  {
      int type;
      cin>>type;
      if(type==1){
        int n;
        cin>>n;
        qe.push(n);
      }else if(type==2){
         if(qe.empty()){

         }else{
        qe.pop();
      }
    }else{
       if (qe.empty())
       {
         cout<<"Empty!"<<endl;
       }else{
        cout<<qe.front()<<endl;
       }
       
    }
  }
  return 0;
}