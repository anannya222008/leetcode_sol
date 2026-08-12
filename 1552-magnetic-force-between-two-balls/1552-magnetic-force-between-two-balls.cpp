class Solution {
public:

    bool isValid(vector<int>& nums,int m , int maxPosition){
        int sz = nums.size();
        int ball = 1,lastPosition = nums[0];
        for(int i=1;i<sz;i++){
            if(nums[i]-lastPosition >= maxPosition){
                ball++;
                lastPosition = nums[i];
            }
            if(ball == m){
                return true;
            }
        }
        return false;
        }


    int maxDistance(vector<int>& nums, int m) {
        sort(nums.begin(),nums.end());
        int sz = nums.size();
        int st = 1,end = nums[sz-1] -nums[0];
        int ans = 0;
        while(st <= end){
            int mid = st+(end - st)/2;
            if(isValid(nums,m,mid)){
                ans = mid;
                st = mid+1;
            }else{
                end = mid-1;
            }
        }
        return ans;

    }
};