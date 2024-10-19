class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0;
        int right=0;
        int zero=0;
        int maxl=0;
        int n=nums.size();
        while(right<n){
            if(nums[right]==0){
                zero++;
            }
            if(zero>k){
                if(nums[l]==0)
                   zero--;
                    l++;
            }
            if(zero<=k){
                maxl=max(maxl,right-l+1);
            }
            right++;
        }
        return maxl;
    }
};