class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();

        int a=0,b=0;
        vector<int> ans;
        int expectedSum =0,actualSum =0;
        unordered_set<int> set;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int val = grid[i][j];
                actualSum += val;
                if(set.find(val) != set.end()){
                    a = val;
                    ans.push_back(a);
                }
                set.insert(val);
            }
        }
        expectedSum = (n*n)*(n*n +1)/2;
        b = expectedSum +a - actualSum;
        ans.push_back(b);
        return ans;

    }
    
};