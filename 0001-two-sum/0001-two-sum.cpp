class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> pair;
        for(int i=0;i<nums.size();i++){
            int firstNum = nums[i];
            int secNum = target - firstNum;
            if(pair.find(secNum) != pair.end()){
                return {i,pair[secNum]};
            }else{
                pair[firstNum] = i;
            }
        }
        return{};
    }
};