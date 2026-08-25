class Solution {
public:
    bool alnum(char c){
        if((c >= '0' && c <= '9') || (tolower(c) >= 'a' && tolower(c) <= 'z')){
            return true;
        }
        return false;
    }
    bool isPalindrome(string s) {
        int n = s.length();
        if(n == 0) return true;
        int st = 0,end = n-1;
        while(st < end){
            if(!alnum(s[st])){
                st++;continue;
            }if(!alnum(s[end])){
                end--;continue;
            }
            if(tolower(s[st]) != tolower(s[end])){
                return false;
            }
            st++;end--;
        }
        return true;
    }
};