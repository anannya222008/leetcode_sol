class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int sz = arr.size();
        int maxR = 0;
        for(int i = sz-1;i>=0;i--){
            int current = arr[i];
            arr[i] = maxR;
            maxR = max(maxR,current);
            if(i == sz-1){
                arr[i] = -1;
            }
        }
        return arr;
    }
};