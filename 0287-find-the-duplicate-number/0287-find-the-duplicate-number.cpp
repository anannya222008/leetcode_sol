class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> set;
        for(int i=0;i<nums.size();i++){
            int val = nums[i];
            if(set.find(val) != set.end()){
                return val;
                break;
            }
            set.insert(val);
        }
        return -1;
    }
};