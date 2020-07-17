/*
https://leetcode.com/problems/binary-search/submissions/
*/

class Solution {
public:
    int search(vector<int>& nums, int target) {
      int start = 0, end = nums.size()-1;
      while(start<=end)
      {
          int mid = (start+end)/2;
          if(nums[mid] == target)
              return mid;
          else if(nums[mid] > target)
               end = mid-1;
          else start = mid+1;
      }
        return -1;
    }
};
