class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0;
        int n=s.length();
        int r=0;
        int maxl=0;
        int maxf=0;
        vector<int> freq(26, 0);
        while(r<n){
            freq[s[r]-'A']++;
            maxf=max(maxf,freq[s[r]-'A']);
            while((r-l+1)-maxf>k){
                freq[s[l]-'A']--;
                l++;
            }
            maxl=max(maxl,r-l+1);
            r++;
        }
        return maxl;
        
    }
};