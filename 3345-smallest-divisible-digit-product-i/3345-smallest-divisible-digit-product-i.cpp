class Solution {
public:
    int product(int k){
        if(k == 0)return 0;
        int pro = 1;
         while(k>0){
            pro *= k%10;
            k = k/10;
        }
        return pro;
    }
    
    int smallestNumber(int n, int t) {
        int ans = n;
        while(ans >= n){
            int pro = product(ans);
            if(pro % t == 0){
                return ans;
            }
            ans++;
        }
        return ans;
        
        
    }
};