class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& m) {
        int srow = 0,erow = m.size()-1;
        int scol = 0,ecol = m[0].size()-1;
        vector<int> ans;  
        while( srow <= erow && scol <= ecol){

            for(int i=scol;i <= ecol;i++){
                ans.push_back(m[srow][i]);
            }
            for(int i=srow+1;i<=erow;i++){
                ans.push_back(m[i][ecol]);
            }
            for(int i=ecol-1;i>=scol;i--){
                if(srow == erow){
                    break;
                }
                ans.push_back(m[erow][i]);
            }
            for(int i=erow-1;i>=srow+1;i--){
                if(scol == ecol){
                    break;
                }
                ans.push_back(m[i][scol]);
            }
            srow++;scol++;erow--;ecol--;
        }
        return ans;
    }
};