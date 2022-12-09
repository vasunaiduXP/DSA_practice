class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>>  res;
        vector<int> ds;
        fun(0, candidates, target, res, ds);
        return res;
    }

    void fun(int ind , vector<int> &arr, int tg, vector<vector<int>>  &res, vector<int> &ds) {
        if(tg==0) {
            res.push_back(ds);
            return;
        }

        for(int i=ind; i<arr.size();++i) {
            if(i>ind && arr[i]==arr[i-1]) continue;
            if(arr[i]>tg) break; 

            ds.push_back(arr[i]);
            fun(i+1, arr, tg-arr[i], res, ds);
            ds.pop_back();
        }
    }
};


/*
40. Combination Sum II
Medium
7.4K
183
Companies
Given a collection of candidate numbers (candidates) and a target number (target), find all unique combinations in candidates where the candidate numbers sum to target.

Each number in candidates may only be used once in the combination.

Note: The solution set must not contain duplicate combinations.

 

Example 1:

Input: candidates = [10,1,2,7,6,1,5], target = 8
Output: 
[
[1,1,6],
[1,2,5],
[1,7],
[2,6]
]
Example 2:

Input: candidates = [2,5,2,1,2], target = 5
Output: 
[
[1,2,2],
[5]
]
 

Constraints:

1 <= candidates.length <= 100
1 <= candidates[i] <= 50
1 <= target <= 30
*/
