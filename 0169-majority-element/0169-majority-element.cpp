class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int sz = nums.size();
        int freq = 1;
        int ans = nums[0];
        for(int i=1;i<sz;i++){
            if(nums[i] == nums[i-1]){
                freq++;
            }else{
                freq = 1;
                ans = nums[i];
            }

            if(freq > sz/2){
                return ans;
            }
        }
        return ans;
    }
};