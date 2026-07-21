#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    int sz = nums.size();
     for(int i=0;i<sz;i++){
           for(int j=i+1;j<sz;j++){
             if(nums[i]+nums[j] == target){
                return {i, j};

                 }
            }
        }
    return {};
}
int main(){
    vector <int> vec = {2,5,6,7,9,8,3,4};
    int target = 6;
    vector<int> result = twoSum(vec, target);
    if(!result.empty()){
        cout << "Indices of the two numbers that add up to " << target << " are: " <<result[0] << " and " << result[1] << endl;
    } else {
        cout << "No two numbers add up to " << target << endl;
    }
}