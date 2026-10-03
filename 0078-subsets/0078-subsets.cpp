class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int i =0;
        vector<vector<int>> subset;
        vector<int> ans;
        set(nums,i,ans,subset);
        return subset;
    }
    void set(vector<int>& nums,int i,vector<int>& ans,vector<vector<int>>& subset){
        if(i == nums.size()){
            subset.push_back(ans);
            return;
        }
        // include
        ans.push_back(nums[i]);
        set(nums,i+1,ans,subset);

        // backtracking
        ans.pop_back();
        set(nums,i+1,ans,subset);

    }
};