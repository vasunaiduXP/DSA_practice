class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        vector<int> ds;
        fun(0, ds, nums, res);
        return res;
    }

    void fun(int ind, vector<int>& ds, vector<int>& arr, vector<vector<int>>& res) {
            res.push_back(ds);
      
        for(int i=ind;i<arr.size();++i) {
            if(i>ind && arr[i]==arr[i-1]) continue;

            ds.push_back(arr[i]);
            fun(i+1, ds, arr, res);
            ds.pop_back();
        }
    }
};

/*

Given an integer array nums that may contain duplicates, return all possible 
subsets
 (the power set).

The solution set must not contain duplicate subsets. Return the solution in any order.

 

Example 1:

Input: nums = [1,2,2]
Output: [[],[1],[1,2],[1,2,2],[2],[2,2]]
Example 2:

Input: nums = [0]
Output: [[],[0]]
 

Constraints:

1 <= nums.length <= 10
-10 <= nums[i] <= 10

*/
