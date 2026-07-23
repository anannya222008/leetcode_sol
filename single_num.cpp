#include <iostream>
#include <vector>
using namespace std;

vector<int> singleNum(vector<int>& nums) {
    vector<int> result;
    int size = nums.size();

    for (int i = 0; i < size; i++) {
        bool isUnique = true;

        for (int j = 0; j < size; j++) {
            if (i != j && nums[i] == nums[j]) {
                isUnique = false;
                break;
            }
        }

        if (isUnique) {
            result.push_back(nums[i]);
        }
    }

    return result;
}

int main() {
    vector<int> nums = {4, 1, 2, 6, 1, 2};
    vector<int> uniques = singleNum(nums);

    if (uniques.empty()) {
        cout << "No unique numbers found." << endl;
    } else {
        cout << "Unique numbers are: ";
        for (int num : uniques) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}