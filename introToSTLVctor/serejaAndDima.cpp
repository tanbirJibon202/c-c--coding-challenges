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

  int L = 0, R = n - 1;
  int SerejaScore = 0, DimaScore = 0;

  for (int turn = 0; turn < n; turn++)
  {
    if (turn % 2 == 0)
    {
      if (arr[L] > arr[R])
      {
        SerejaScore += arr[L];
        L++;
      }
      else
      {
        SerejaScore += arr[R];
        R--;
      }
    }
    else
    {

      if (arr[L] > arr[R])
      {
        DimaScore += arr[L];
        L++;
      }
      else
      {
        DimaScore += arr[R];
        R--;
      }
    }
  }

  cout << SerejaScore << " " << DimaScore << '\n';
  return 0;
}
