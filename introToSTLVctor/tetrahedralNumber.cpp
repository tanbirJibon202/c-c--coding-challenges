#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<vector<int>> arr;
  for (int x = 0; x <= n; x++)
  {
    for (int y = 0; y <= n; y++)
    {
      for (int z = 0; z <= n; z++)
      {
        if (x + y + z <= n)
        {
          vector<int> temp = {x, y, z};
          arr.push_back(temp);
          // arr.push_back({x, y, z});
        }
      }
    }
  }
  for (int i = 0; i < arr.size(); i++)
  {
    cout << arr[i][0] << " " << arr[i][1] << " " << arr[i][2] << '\n';
  }

  return 0;
}
