class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        int idx = 0;
        vector<vector<int>> ans;
        getperm(nums,idx,ans);
        return ans;
    }
    void getperm(vector<int>& nums,int idx,vector<vector<int>>& ans){
        if(idx == nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int i=idx;i<nums.size();i++){
            swap(nums[idx],nums[i]);
            getperm(nums,idx+1,ans);
            swap(nums[idx],nums[i]);
            
        }
    }
};