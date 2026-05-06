#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,
             tree_order_statistics_node_update> ordered_set;
int main(){
  int q;
  cin >> q;
  ordered_set os;
  while (q--)
  {
     char ch;
     int x;
     cin>>ch>>x;
     if(ch=='I'){
       os.insert(x);
     }else if(ch == 'D'){
        os.erase(x);
     }else if(ch == 'C'){
       cout<<os.order_of_key(x)<<"\n";
     }else{
      if(os.size() < x){
        cout<<"invalid"<<"\n";
      }else{
          x--;
          cout<<*os.find_by_order(x)<<"\n";
      }
     }
  }
  
  return 0;
}