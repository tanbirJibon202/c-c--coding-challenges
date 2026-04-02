#include <bits/stdc++.h>
using namespace std;
int main(){
  class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int left = 0, right = n - 1, ans = -1;
        while (left < right)
        {
            int mid = left + (right - left) / 2;
            if(nums[mid] == target){
                ans = mid;
                break;
            }
            // check if left half is sorted
            if(nums[left] <= nums[mid]){
                // check if target lies in left half
                if(nums[left] <= target && target < nums[mid]){
                    right = mid - 1;
                } else left = mid + 1;
            } else {
                // right half is sorted
                // check if target lies in right half
                if(target >= nums[left]){
                    right = mid - 1;
                } else{
                  if(target > nums[mid]){
                    left = mid + 1;
                  } else right = mid - 1;
                }
            }
        }
        if(left == right && ans == -1 && nums[left] == target){
          ans = left; 
        }
        return ans;
    }
};
  return 0;
}