class Solution {
public: 
    //helper func
    int binsearch(vector<int>& nums, int tgt,int st,int end) {
        if(st <= end){
            int mid = st+(end-st)/2;
            if(nums[mid] == tgt) return mid;
            else if(nums[mid] > tgt){
                return binsearch(nums,tgt,st,mid-1);
            }else{
                return binsearch(nums,tgt,mid+1,end);
            }
        }
        return -1;
         
    }
    int search(vector<int>& nums,int tgt){
        int st =0,end = nums.size()-1;
        return binsearch(nums,tgt,st,end);
    }
};