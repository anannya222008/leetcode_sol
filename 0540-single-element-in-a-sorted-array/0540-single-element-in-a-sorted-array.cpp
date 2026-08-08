class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int sz = nums.size();
        int st = 0,end = sz-1;
        if(sz == 1) return nums[0];
        while(st<=end){
            int mid = st + (end-st)/2;
            if(mid == 0 && nums[mid] != nums[mid+1]) return nums[mid];
            if(mid == sz-1 && nums[mid] == nums[mid-1]) return nums[mid];
            if(nums[mid] != nums[mid-1] && nums[mid] != nums[mid+1]) return nums[mid];
            if(mid%2 == 0){
                if(nums[mid-1] == nums[mid]){
                    end = mid-1;
                }else{
                    st = mid+1;
                } 
            }else{
                if(nums[mid-1] == nums[mid]){
                    st = mid+1;
                }else{
                    end = mid-1;
                }
            }
        }
        return -1;
    }
};