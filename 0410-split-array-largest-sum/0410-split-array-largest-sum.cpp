class Solution {
public:
    bool isValid(vector<int>& nums, int k,int maxSum){
        int n = nums.size();
        int subarray = 1,currentSum = 0;
        for(int i=0;i<n;i++){
            if(nums[i]>maxSum) return false;

            if(currentSum + nums[i] <= maxSum){
                currentSum += nums[i];
            }else{
                subarray++;
                currentSum = nums[i];
            }
        }
        if(subarray > k){
            return false;
        }else{
            return true;
        }
    }

    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();
        if(k>n) return -1;
        int sum = 0;
        for(int i:nums){
            sum +=i;
        }
        int st = 0,end = sum;
        int ans = 0;

        while(st<=end){
            int mid = st + (end-st)/2;
            if(isValid(nums,k,mid)){
                ans = mid;
                end = mid-1;
            }else{
                st = mid+1;
            }
        }
        return ans;
        
    }
};