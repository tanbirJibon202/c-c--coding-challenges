#include <bits/stdc++.h>
using namespace std;
int main(){

    // char x = 'A';
    // cout << x << endl;
     
    // string str = "Hello, World!";
    // cout << str << endl;

    // string s1 = "Hello";
    // string s2 = "World";
    // string s3 = s1 + "," + s2 + "!";
    // cout << s3 << endl;

    // string s1 = "1";
    // string s2 = "2";
    // string s3 = s1 + s2;
    // cout << s3 << endl;

    // char s1 = '1';
    // char s2 = '2';
    // char s3 = s1 + s2;
    // cout << s3 << endl;
    
    // String Declaration and Input/Output
    // char str[20];          
    // scanf("%s", str);
    // printf("%s\n", str);
    // printf("Length: %d\n",strlen(str));
    
    // Traversal
    // char str[20];          
    // scanf("%s", str);
    // int size = strlen(str);
    // for(int i = 0; i < size; i++){
    //     printf("%c\n", str[i]);
    // }

   // String Declaration and Input/Output
    // string str;  // vector<char> str;
    // cin >> str;
    // cout << str << endl;
    // cout << "Length: " << str.size() << endl;
    // cout << "Length: " << str.length() << endl;

    // string str;  // vector<char> str;
    // cin >> str;
    // cout << str << endl;
    // Traversal
    // for(int i = 0; i < str.size(); i++){
    //     cout << str[i] << endl;
    // }
    // for(auto& it : str){
    //     cout << it << endl;
    // }

    // string str = "tanbir";
    // cout << str << endl;
    // cout << str.size() << endl;
    // cout << str[0] << endl;

    // string str;
    // getline(cin, str); 
    // cout << str << endl;
    // cout << str.size() << endl;

  // String to String concate..
    // string a = "xyz";
    // string b = "pqr";
    // c = "xyzpqr"
    // string c;
    // for (auto& it : a)
    // {
    //    c.push_back(it);
    // }
    //  for (auto& it : b)
    // {
    //    c.push_back(it);
    // }
    // cout<<c<<endl;
    // c = a + b;
    // cout<<c<<endl;
    
    // string a = "xyz";
    // string b = "pqr";
    // a += b; // a = a + b
    // a += "mno";
    // a += 'g';
    // cout<<a<<endl;
    
    // string reverse
    // string str = "abcd1234";
    // reverse(str.begin(), str.end());
    // reverse(str.begin()+2, str.begin()+6);
    // cout<<str<<endl;


    // string sort
    // string str = "audbivaud";
    // cout<<str<<endl;
    // sort(str.begin(), str.end());
    // cout<<str<<endl;
    // sort(str.begin(), str.begin()+4);
    // cout<<str<<endl; 

    // 2D String
    // 2 x 3
    // abc
    // xyz
    // Row = 2 col = 3
// int n = 2, m = 3;
// vector<string> str(n, string(m, ' ')); 
// for (int i = 0; i < n; i++) 
// {
//     for (int j = 0; j < m; j++) 
//     {
//         cin >> str[i][j]; 
//         cout << str[i][j] << " "; 
//     }
//     cout << "\n"; 
// }
//    int n = 2, m = 3;
//   //  vector<string> str(n);
//   string str[n];
// for (int i = 0; i < n; i++) 
// {
//     cin >> str[i];
//     cout<<"Row "<<i<<" : "<<str[i]<<endl;
// }

    // String Comparison
    // string a = "aba";
    // string b = "abcdaaa";
    // string c = "abbzzz";
    
    // a < c < b
    // Compare a and c
    // if (a == c) {
    //     cout << a << " is less than " << c << endl;
    // } else if (a > c) {
    //     cout << a << " is greater than " << c << endl;
    // } else {
    //     cout << a << " is equal to " << c << endl;
    // } 

    // string str[5] = {"x", "ab", "aaazzzz", "iefas", "adg"};
    // sort(str, str + 5);
    // for (int i = 0; i < 5; i++) {
    //     cout << str[i] << endl;
    // }

    // String Erase
    // string str = "abcdef";
    // str.erase(2, 2); // start index, length
    // cout << str << endl; // abef

    // string str = "audbivaud";
    // str.erase(3, 4); // start index, length
    // cout << str << endl; 
    
    // string str = "GARGRGSRG";
    // cout<<str<<endl;
    // // transform(str.begin(), str.end(), str.begin(), ::tolower);
    // for (auto& it : str) {
    //     it = tolower(it);
    // }
    // cout<<str<<endl;
   
    // string str = "abcdefgh";
    // cout<<str<<endl;
    // // transform(str.begin(), str.end(), str.begin(), ::toupper);
    // for (auto& it : str) {
    //     it = toupper(it);
    // }
    // cout<<str<<endl;

    // Substring
    // string a = "abcdef";
    // string b;
     // for (int i = 2; i < a.length()-1; i++)
     // {
     //   // b.push_back(a[i]);
   //   b += a[i];
     // }
    // b = a.substr(2, 3); // start index, length
    // cout<<b<<endl;
    
    // All Substrings
    string a = "abc";
    int n = a.size();
    cout<<n<<endl;
    for (int startPos = 0; startPos < n; startPos++) {
        // startPos
        // startPos, startPos+1...end
        for (int endPos = startPos;  endPos < n; endPos++) {
            // a[startPos]...a[endPos]
            int len = endPos - startPos + 1;
            cout<<a.substr(startPos, len)<<endl;
        }
    }   

    


  return 0;
}