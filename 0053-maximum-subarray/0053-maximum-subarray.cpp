class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int s=0;
        int m=INT_MIN;
        int n=nums.size();
        for(int i=0;i<n;i++){
            s+=nums[i];
            m=max(m,s);
            if(s<=0){
                s=0;
            }
        }
        return m;
    }
};