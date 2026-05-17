

#include <bits/stdc++.h>
using namespace std;
struct info{
   string name;
   int roll;
   int mark;

   void input(){
    cin>>name;
    cin>>roll;
    cin>>mark;
   }
   void output(){
     cout<<name<<endl;
     cout<<roll<<endl;
     cout<<mark<<endl;
   }
};

void solve(){
    int n;
    cin>>n;
    vector<info>vct(n);
    for (int i = 0; i < n; i++)
    {
        vct[i].input();
    }
    for (int i = 0; i <n; i++)
    {
       vct[i].output();
       cout<<endl;
    }
    
}

int main(){
    solve();
    return 0;
}