#include <bits/stdc++.h>
using namespace std;

int main()
{
  int test;
  cin >> test;
  while (test--)
  {
    int n, x;
    cin >> n >> x;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    // int distinct = 1;
    // for (int i = 0; i < n - 1; i++)
    // {
    //   if (arr[i] != arr[i + 1])
    //   {
    //     distinct++;
    //   }
    // }

    arr.erase(unique(arr.begin(), arr.end()), arr.end());
    int distinct = arr.size();

    if (distinct == x)
      cout << "Good" << '\n';
    else if (distinct < x)
      cout << "Bad" << '\n';
    else
      cout << "Average" << '\n';
  }
  return 0;
}
