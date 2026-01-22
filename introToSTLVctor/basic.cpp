#include <bits/stdc++.h>
using namespace std;
int main()
{
  // vector <int> vct;
  // size 0
  // vector <int> vct = {1, 2, 3, 5};
  // size 4
  // vector <int> vct (5);
  // size 5 {0,0,0,0,0}

  // vector <int> vct (5,2);
  // size 5 {2,2,2,2,2}

  // vector<int>vct;
  // vct.push_back(2);
  // {2}
  // vct.push_back(4);
  // {2,4}

  // vector<int> vct;
  // int n;
  // cin >> n;
  // int temp;
  // for (int i = 0; i < n; i++)
  // {
  //   cin >> temp;
  //   vct.push_back(temp);
  // }
  // 5 4 3 2 1
  // for (int i = 0; i < n; i++)
  // {
  //   cout << vct[i] << ' ';
  // }

  //

  // int n;
  // cin >> n;
  // vector<int> vct(n);
  // {0,0,0,0,0}
  // for (int i = 0; i < vct.size(); i++)
  // {
  //   cin >> vct[i];
  // }

  // cout << vct.size() << endl;

  // for (int i = 0; i < vct.size(); i++)
  // {
  //   cout << vct[i] << ' ';
  // }

  // int n;
  // cin >> n;
  // vector<int> vct(n);
  // for (int i = 0; i < n; i++)
  // {
  //   cin >> vct[i];
  // }
  // for (auto &item : vct)
  // {
  //   cin >> item;
  // }
  // for (auto item : vct)
  // {
  //   cout << item << endl;
  // }
  // for (int item : vct)
  // {
  //   cout << item << endl;
  // }

  // int n;
  // cin >> n;
  // vector<int> vct(n);

  // for (int i = 0; i < n; i++)
  // {
  //   cin >> vct[i];
  // }

  // for (auto &item : vct)
  // {
  //   cin >> item;
  // }

  // for (int i = 0; i < n; i++)
  // {
  //   // vct[i] = vct[i] + 1;
  //   vct[i]++;
  // }

  // for (auto item : vct)
  // {
  //   item++;
  // }

  // for (auto &item : vct)
  // {
  //   item++;
  // }

  // for (auto item : vct)
  // {
  //   item++;
  //   cout << item << endl;
  // }

  // for (auto item : vct)
  // {
  //   cout << item << endl;
  // }

  // int n;
  // cin >> n;
  // vector<int> vct(n);

  // for (auto &item : vct)
  // {
  //   cin >> item;
  // }

  // for (auto item : vct)
  // {
  //   cout << item << endl;
  // }

  // vct.clear();// Destroys the vector, size = 0

  // for (auto item : vct)
  // {
  //   cout << item << endl;
  // }

  // int m;
  // cin >> m;
  // int temp;
  // for (int i = 0; i < m; i++)
  // {
  //   cin >> temp;
  //   vct.push_back(temp);
  // }
  // for (auto item : vct)
  // {
  //   cout << item << endl;
  // }

  // vector<int> vct = {1, 2, 3, 4, 5};
  // cout << "Size before " << vct.size() << endl;
  // vct.resize(7); //{1, 2, 3, 4, 5, 0, 0}
  // cout << "Size after " << vct.size() << endl;
  // vct.resize(3); //{1, 2, 3}

  // // vct.resize(6); //{1, 2, 3, 0, 0, 0}
  // // vct.resize(6, 9); //{1, 2, 3, 9, 9, 9} (size, value)
  // int n;
  // cin >> n;
  // vct.resize(n, 9);
  // for (auto item : vct)
  // {
  //   cout << item << endl;
  // }

  // Assign -> Full reset

  // vector<int> vct;
  // vct = {1, 2, 3, 4, 5};
  // vct.assign(4, 10); //{10, 10, 10, 10} assign(size, value)
  // for (auto item : vct)
  // {
  //   cout << item << endl;
  // }

  vector<int> vct1 = {1, 2, 3, 4};
  // vector<int> vct2 = vct1;
  // vector<int> vct2;
  vector<int> vct2 = {6, 7, 8, 9, 0};
  // vct2 = vct1;
  // vct2.assign(vct1.begin() + 1, vct1.end());
  // vct2.assign(iterator L, iterator R+1) [L,R) // L theke R porjont sob value vct er moddhe rakhbe
  vct2.assign(vct1.begin() + 1, vct1.end() - 1); // range assign
  for (auto item : vct2)
  {
    cout << item << endl;
  }

  return 0;
}