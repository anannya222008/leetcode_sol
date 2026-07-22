#include <iostream>
#include <vector>
using namespace std;
    
int singleNum(vector<int>& nums){
    int size = nums.size();
    for(int i=0;i<size;i++){
        bool isUnique = true;
        for(int j =0;j<size;j++){
            if(i!=j && nums[i] == nums[j]){
                isUnique = false;
                break;
            }
        }
        if(isUnique){
            return nums[i];
        }
    }
    return -1; // or some other indicator of an error
}
int main(){
    vector <int> nums = {4, 1, 2, 1, 2};
    cout<< "The single number is: " << singleNum(nums) << endl;
    return 0;
}