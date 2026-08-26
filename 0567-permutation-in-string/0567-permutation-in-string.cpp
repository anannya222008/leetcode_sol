class Solution {
public:

    bool isFreqSame(int str1[],int str2[]){
        for(int i=0;i<26;i++){
            if(str1[i] != str2[i]){
                return false;
            }
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        int freq[26] = {0};
        for(int i=0;i<s1.length();i++){
            freq[s1[i]-'a']++;
        }
        
        for(int i=0;i<s2.length();i++){
            int windowIdx = 0,idx = i;
            int windowFreq[26] = {0};
            while(windowIdx <s1.length() && idx <s2.length()){
                windowFreq[s2[idx]-'a']++;
                windowIdx++;
                idx++;
            }
            if(isFreqSame(freq,windowFreq)){
                return true;
            }
        }
        return false;
    }     
    
};