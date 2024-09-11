class Solution {
public:
    int minBitFlips(int start, int goal) {
        int s=start^goal;
        int ans=0;
        while(s>0){
         ans+=s&1;
        s>>=1;}
        return ans;
    }
};