class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int sz = strs.size();
        string prefix = strs[0];
        if(sz==0) return "";
        for(int i=1;i<sz;i++){
            while(strs[i].find(prefix) != 0){
                prefix.pop_back();
                if(prefix.empty()) return "";
            }
        }
        return prefix;
    }
};