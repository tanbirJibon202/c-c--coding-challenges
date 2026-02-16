#include <iostream>
#include <string>
#include <set>
#include <sstream>
using namespace std;
int main(){
  while (1)
  {
     string str;
     getline(cin, str);
     if (str == "#")
     {
        break;
     }
     stringstream terminal(str);
     string word;
     set<string>st;
     while (terminal>>word)
     {
        st.insert(word);
     }
     cout<<st.size()<<endl;
     
  }
  
  return 0;
}