class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> ds;
        vector<vector<int>> res;
        
        int freq[nums.size()];
        for(int i=0;i<nums.size();++i) freq[i]=0;

        permute(ds, res, freq, nums);

        return res;
        
    }

    void permute(vector<int> &ds, vector<vector<int>> &res, int freq[], vector<int> & arr) {
        if(ds.size()==arr.size()) {
            res.push_back(ds);
            return;
        }

        for(int i=0;i<arr.size();++i) {
            if(!freq[i]) {
                ds.push_back(arr[i]);
                freq[i]=1;

                permute(ds, res, freq, arr);
                
                ds.pop_back();
                freq[i]=0;
            }
        }
    }
};


/*

link : https://leetcode.com/problems/permutations/

Given an array nums of distinct integers, return all the possible permutations. You can return the answer in any order.

 

Example 1:

Input: nums = [1,2,3]
Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]
Example 2:

Input: nums = [0,1]
Output: [[0,1],[1,0]]
Example 3:

Input: nums = [1]
Output: [[1]]
 

Constraints:

1 <= nums.length <= 6
-10 <= nums[i] <= 10
All the integers of nums are unique.

*/
