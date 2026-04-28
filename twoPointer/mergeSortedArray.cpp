#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int l = 0, r = 0;
        vector<int> merged;

        while(l < m && r < n){
            if(nums1[l] < nums2[r]){
                merged.push_back(nums1[l]);
                l++;
            }else{
                merged.push_back(nums2[r]);
                r++;
            }
        }

        while(l < m){
            merged.push_back(nums1[l]);
            l++;
        }

        while(r < n){
            merged.push_back(nums2[r]);
            r++;
        }

        nums1 = merged;
    }
};
int main(){
  int m,n;
  cin >> m >> n;
  vector<int> nums1(m+n), nums2(n);
  for(int i = 0; i < m; i++) cin >> nums1[i];
  for(int i = 0; i < n; i++) cin >> nums2[i];
  Solution sol;
  sol.merge(nums1, m, nums2, n);
  for(int i = 0; i < m+n; i++) cout << nums1[i] << " ";
  return 0;
}

// Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
// Output: [1,2,2,3,5,6]