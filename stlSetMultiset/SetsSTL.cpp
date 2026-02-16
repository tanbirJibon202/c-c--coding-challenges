#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
    cin >> n;
    set<int> st;
    while (n--)
    {
        int type;
        cin>> type;
        if(type == 4){
          st.clear();
        }
        else{
          int x;
          cin >> x;
          if(type == 1){
            st.insert(x);
          }else if(type == 2){
               st.erase(x);
          }else{
            if(st.count(x)){
              cout<<"Yes\n";
            }else{
              cout<<"No\n";
            }
          }
        }
    }
  return 0;
}