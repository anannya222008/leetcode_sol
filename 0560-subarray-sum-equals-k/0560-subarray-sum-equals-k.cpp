class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        vector<int> sum(nums.size(),0);
        int subarraySum = 0;
        for(int i=0;i<nums.size();i++){
            subarraySum += nums[i];
            sum[i] = subarraySum;
        }
        unordered_map<int,int> m;
        int count = 0;
        for(int j=0;j<nums.size();j++){
            if(sum[j] == k) count++;
            int val = sum[j]-k;
            if(m.find(val) != m.end()){
                count += m[val];
            }
            if(m.find(sum[j]) == m.end()){
                m[sum[j]] = 0;
            }
            m[sum[j]] ++;
        }  
        return count;

    }
};