class Solution {
public:
    int search(vector<int>& nums, int target) {
        int sz = nums.size();
        int st = 0, end = sz-1;
        while(st <= end){
            int mid = st + (end - st)/2;
            if(nums[mid] == target){
                return mid;
            }
            if(nums[st] <= nums[mid]){//left is sorted.
                if(nums[st] <= target && target <= nums[mid]){
                    end = mid -1;
                }else{
                    st = mid+1;
                }

            }
            else{//right is sorted.
                if(nums[mid] <= target && target <= nums[end]){
                    st = mid+1;
                }
                else{
                    end = mid-1;
                }
            }
        }
        return -1;
    }
};