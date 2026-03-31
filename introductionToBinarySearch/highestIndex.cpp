#include <bits/stdc++.h>
using namespace std;
int main(){
  
  int arr[] = {1, 2, 3, 3, 5, 7, 9, 9, 9, 10, 12};
  int n = sizeof(arr) / sizeof(arr[0]);
  int left = 0, right = n, target;
  // HIGHEST INDEX WHERE < TARGET
  cin>> target;
  while (left < right)
  {
    int mid = left + (right - left) / 2;
    // check mid
    if (arr[mid] < target)    
      left = mid;
    else right = mid - 1;
  }
  cout << "Highest Index where < target: " << left << endl;
  return 0;
}