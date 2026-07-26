class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int sz = nums.size();
        for(int i : nums){
            int freq = 0;
            for(int j : nums){
                if(i == j){
                    freq++;
                }
                if(freq > sz/2){
                    return i;
                }
            }
        }
        return 0;
    }
};