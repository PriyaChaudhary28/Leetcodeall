class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0;
        int r=0;
        int zc=0;
        int n=nums.size();
        int maxl=0;
        while(r<n){
            if(nums[r]==0){
                zc++;
            }
            if(zc>k){
                if(nums[l]==0) zc--;
                l++;
            }
            if(zc<=k) {
                maxl=max(maxl,r-l+1);
            }
            
r++;
        }
        return maxl;
    }
};