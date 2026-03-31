#include <bits/stdc++.h>
using namespace std;
int main(){
  int arr[] = {1, 2, 3, 3, 5, 7, 9, 9, 9, 10, 12};
  int n = sizeof(arr) / sizeof(arr[0]);
  int left = 0, right = n, target;
  cin>> target;
  while (left < right)
  {
    int mid = left + (right - left) / 2;
    if (arr[mid] > target)
      right = mid;
    else left = mid + 1;
  }
  cout << "Upper Bound of index: " << left << endl;
  return 0;
}