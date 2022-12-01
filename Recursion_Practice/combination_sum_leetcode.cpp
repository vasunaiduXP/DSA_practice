class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> ds;
        sub(0, ds,  candidates ,  target, res, candidates.size());
        return res;
    }

void sub(int i, vector<int> &ds, vector<int> &arr, int tg, vector<vector<int>> &res, int n) {
    if(i>=n) {
        if(tg==0) {
            res.push_back(ds);
        }
        return;
    }

    if(arr[i]<=tg) {
    ds.push_back(arr[i]);
    sub(i, ds, arr, tg-arr[i], res, n);
    ds.pop_back();
    }
    
    sub(i+1, ds, arr, tg, res, n);


}
};

