class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>s;
        vector<int>ans;
        for(int k=0;k<n;k++){
         if(nums[k]<0){
             s.push_back(nums[k]);
         }
            else{
                ans.push_back(nums[k]);
            }
        }
        for(int i=0;i<n/2;i++){
       nums[2*i]=ans[i];
        nums[2*i+1]=s[i];
        }
       return nums ;
    }
};