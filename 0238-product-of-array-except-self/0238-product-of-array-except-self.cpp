class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int sz = nums.size();
        vector <int> ans(sz,1);
        vector <int> prefix(sz,1);
        vector <int> suffix(sz,1);
        for(int i=1;i<sz;i++){
            prefix[i] = prefix[i-1]*nums[i-1];
        }
        for(int i=sz-2;i>=0;i--){
            suffix[i] = suffix[i+1]*nums[i+1];
        }
        for(int i=0;i<sz;i++){
            ans[i] = prefix[i]*suffix[i];
        }
        return ans;
    }
};