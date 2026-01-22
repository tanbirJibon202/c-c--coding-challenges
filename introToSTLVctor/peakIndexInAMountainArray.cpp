#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int mx = -1, idx = 0;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] > mx)
    {
      mx = arr[i];
      idx = i;
    }
  }
  cout << idx << endl;

  return 0;
}