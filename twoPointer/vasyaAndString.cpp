#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,value;
  cin>>n>>value;
  string str;
  cin>>str;
  int l = 0, r = 0, cnt_of_a = 0, cnt_of_b = 0,answer = 0;
  for (; r < n; r++)
  {
    if (str[r] == 'a')
      cnt_of_a++;
    else
      cnt_of_b++;
    while (!(cnt_of_a<=value||cnt_of_b<=value))
    {
      if (str[l] == 'a')
        cnt_of_a--;
      else
        cnt_of_b--;
      l++;
    }
    answer = max(answer, r - l + 1);
  }
  cout<<answer<<endl;
  return 0;
}