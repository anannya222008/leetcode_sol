class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    int sum =0;
    vector <int> pair;
    int sz = nums.size();
    for(int i=0;i<sz;i++){
        for(int j=i+1;j<sz;j++){
            if(nums[i] + nums[j] == target){
                pair.push_back(i);
                pair.push_back(j);
            }
        }
    }
    return pair;

    }
};