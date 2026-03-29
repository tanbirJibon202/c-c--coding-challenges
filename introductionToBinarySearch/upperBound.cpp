#include <bits/stdc++.h>
using namespace std;
int main(){
  
  int arr[] = {1, 2, 2, 3, 4, 7, 7, 20, 30, 31};
  int n = sizeof(arr) / sizeof(arr[0]);
  int left = 0, right = n, target;
  cin>> target;
  while (left < right)
  {
    int mid = left + (right - left) / 2;
    if (arr[mid] <= target)
      left = mid + 1;
    else right = mid;
  }
  cout << "Upper Bound: " << left << endl;
  return 0;
}