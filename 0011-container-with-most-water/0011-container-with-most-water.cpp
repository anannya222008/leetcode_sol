class Solution {
public:
    int maxArea(vector<int>& height) {
        int sz = height.size();
        int left = 0,right = sz-1;
        int maxWater = 0;
        while(left<right){
            int ht = min(height[left],height[right]);
            int wd = right-left;
            int current = ht * wd;
            maxWater = max(maxWater,current);
            if(height[left]<height[right]){
                left++;
            }else{
                right--;
            }
        }
        return maxWater;
    }
};