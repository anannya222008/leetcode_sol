class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> ans;
        vector<vector<int>> allsubset;
        int i = 0;
        backtracking(nums,ans,i,allsubset);
        return allsubset;
    }
    void backtracking(vector<int>& nums,vector<int>& ans,int i,vector<vector<int>>&allsubset){
    if(i == nums.size()) {
        allsubset.push_back(ans);
        return;
    }

    ans.push_back(nums[i]);
    backtracking(nums,ans,i+1,allsubset);
    int idx = i+1;
    ans.pop_back();
    while(idx < nums.size() && nums[idx] == nums[idx-1]){
        idx++;
    }
    backtracking(nums,ans,idx,allsubset);
        
    }
};