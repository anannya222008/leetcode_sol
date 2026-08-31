class Solution {
public:
    int firstUniqChar(string s) {
        int arr[26] = {0};
        for(int i=0;i<s.length();i++){
            arr[s[i]-'a']++;
        }
        for(int j=0;j<s.length();j++){
            if(arr[s[j] - 'a'] == 1){
                return j;
            }
        }
        return -1;
    }
};