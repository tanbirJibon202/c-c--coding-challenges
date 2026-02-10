#include <bits/stdc++.h>
using namespace std;
int main(){
   while (1)
   {
     map<string,int> count;
     string color;
     int num;
     cin>>num;
      if (num == 0)
      {
          break;
      }
     for (int i = 0; i < num; i++)
     {
        cin>>color;
        count[color]++;
     }
     // Output the map's content
        // for (auto it = count.begin(); it != count.end(); it++) {
        //     cout << it->first << " " << it->second << endl;
        // }
     int maxCount = 0;
     string answer = "";
      for (auto it : count)
      {
          if (it.second > maxCount)
          {
            maxCount = it.second;
            answer = it.first;
          }
      }
     cout<<answer<<endl;
   }
   
  return 0;
}