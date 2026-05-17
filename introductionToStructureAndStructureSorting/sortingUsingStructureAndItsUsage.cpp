// #include <bits/stdc++.h>
// using namespace std;

// struct data{
//    int x, y; 
// };

// bool cmp(data &a, data &b){
//     if(a.x > b.x){
//         return true;
//     }
//     else if(a.x < b.x){
//       return false;
//     }else{
//       if(a.y > b.y) return true;
//       else return false;
//     }
// }

// void solve(){
//     int n;
//     cin >> n;

//     vector<data> vct(n);

//     for (int i = 0; i < n; i++){
//         cin >> vct[i].x >> vct[i].y;
//     }

//     sort(vct.begin(), vct.end(), cmp);

//     for (int i = 0; i < n; i++){
//         cout << vct[i].x << " " << vct[i].y << endl;
//     }
// }

// int main(){
//     solve();
//     return 0;
// }



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

bool cmp(info &x, info &y){
     if(x.mark > y.mark) return true;
     else if(x.mark < y.mark) return false;
     else{
        if(x.roll < y.roll) return true;
        else return false;
     }
}

void solve(){
    int n;
    cin>>n;
    vector<info>vct(n);
    for (int i = 0; i < n; i++)
    {
        vct[i].input();
    }
    sort(vct.begin(), vct.end(), cmp);
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