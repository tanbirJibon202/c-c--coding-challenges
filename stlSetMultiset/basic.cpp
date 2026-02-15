#include <bits/stdc++.h>
using namespace std;
// bool cmp(pair<int, int> a, pair<int, int> b){
//    if(a.second < b. second){
//      return true;
//    }
//    if(a.second > b.second){
//      return false;
//    }
//    if(a.first < b.first){
//     return true;
//    }
//    return false;
// }
int main(){
  // vector<int>vct = {1, 2, 3};
  // set
  // unique
  // sorted
  // {5, 2, 7}
  // {2, 5, 7}
  // set<int>st = {1,2,3,1,4}; //{1,2,3,4};
  // set<int>st = {2, 1, 3, 3, 1, 2}; 
  // for(auto val : st){
  //   cout<<val<<endl;
  // }

  // for (auto it = st.begin(); it != st.end(); it++){
  //     cout<<*it<<endl;
  // }
  //  set<int>st;
  //  st.insert(1);
  //  cout<<st.size()<<endl;
  //  st.insert(2);
  //  cout<<st.size()<<endl;
  //  st.insert(1);
  //  cout<<st.size()<<endl;
  //  st.insert(2);
  //  cout<<st.size()<<endl;
  

  //  set<int>st;
  //  cout<<st.empty()<<endl;

  // set<int>st = {1, 3, 1, 3, 5, 2};
  // st.clear();
  // cout<<st.empty()<<endl;
  
    // set<int>st;
    // st.insert(1);
    // st.insert(2);
    // st.insert(3);
    // st.erase(2);
    // st.insert(2);
    // st.erase(3);
    // for (auto val : st)
    // {
    //    cout<<val<<endl;
    // }

    // cout<<*st.begin()<<endl;
    // cout<<*(++st.begin())<<endl;
    // set<int>st;
    // st.insert(4);
    // st.insert(2);
    // st.insert(3);
    // st.insert(7);
    // st.insert(6);
    // st.insert(2);
    // for (int val : st)
    // {
    //    cout<<val<<" ";
    // }
    // cout<<endl;
    
    // int indx = 0;
    // for (auto val : st)
    // {
    //    if(indx == 3){
    //       cout<< val<< endl;
    //       break;
    //    }
    //    indx++;
    // }
    
    // set<int>st;
    // st.insert(4);
    // st.insert(2);
    // st.insert(3);
    // st.insert(7);
    // st.insert(6);
    // st.insert(2);

    // cout<<*(--st.end())<<endl;
    // cout<<*st.rbegin()<<endl;
    
    // cout<<st.count(2)<<endl;
    // cout<<st.count(10)<<endl;

    // if(st.count(4)){
    //   cout<<"Value exists\n";
    // }else{
    //   cout<<"No value exists\n";
    // }
    // cout<<*st.find(6)<<endl;
    // cout<<*st.find(2)<<endl;

    // if(st.find(6)==st.end()){
    //   cout<<"No\n";
    // }else{
    //   cout<<"Yes\n";
    // }

    // set<string> st;
    // st.insert("adnan");
    // st.insert("zawad");
    // st.insert("toky");
    // st.insert("fahim");
    // st.insert("shakil");

    // for (auto it : st){
    //   cout<<it<<endl;
    // }
    
    // pair<int, int> pr = {1, 3};
    // cout<<pr.first<<endl;
    // cout<<pr.second<<endl;


    // pair<int, string> pr = {1, "adnan"};
    // cout<<pr.first<<endl;
    // cout<<pr.second<<endl;
   
    // pair<int, string> pr;
    // pr.first = 1;
    // pr.second = "abc";

    // {5, 1, 2, 3}
    
    // vector<int> x = {5, 1, 6, 2};
    // vector<pair<int, int>> vct;

    // for (int i = 0; i < x.size(); i++)
    // {
    // vct.push_back({x[i], i});
    // }
    // // {5, 0}, {1, 1}, {6, 2}, {2, 3};
    // sort(vct.begin(), vct.end());
    // // {1, 1}, {2, 3}, {5, 0}, {6, 2}
    // for (auto pr : vct)
    // {
    //    cout<<pr.first <<" -> " << pr.second << endl;
    // }


    // set<pair<int, int>> st;
    // st.insert({1,2});
    // st.insert({4, 1});
    // st.insert({1, 2});
    
    // set<pair<int, int>, greater<pair<int, int>>> st;
    // st.insert({4, 1});
    // st.insert({1, 1});
    // st.insert({1, 4});
    // st.insert({2, 2});
    // st.insert({2, 3});
    // for (auto it : st)
    // {
    //     cout<< it.first<< " "<< it.second<< endl;
    // }


    // set<int, greater<int>> st;
    // st.insert(4);
    // st.insert(1);
    // st.insert(2);
    // st.insert(3);

    // for (auto it : st)
    // {
    //    cout<< it << endl;
    // }


    // set<string, greater<string>> st;
    // st.insert("ab");
    // st.insert("ba");
    // st.insert("ca");
    // st.insert("bc");
    // for (auto it : st)
    // {
    //    cout<< it << endl;
    // }

    //  1 x -> add x to the list
    //  2 x -> remove all occurances of x
    //  3 x -> print if x exists
    //  4 -> clear

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