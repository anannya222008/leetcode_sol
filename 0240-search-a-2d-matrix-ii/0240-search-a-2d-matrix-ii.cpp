class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int tgt) {
        int m = mat.size(),n = mat[0].size();
        int r = 0, c = n-1;
        while(c >= 0 && r < mat.size()){
            if(tgt == mat[r][c]){
                return true;
            }   
            else if(tgt > mat[r][c]){
                r++;
            }else if(tgt < mat[r][c]){
                c--;
            }
        }
        return false;
    }
};